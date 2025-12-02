#include <stdio.h>
#include <stdlib.h>
#include <zip.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <zipfile>\n", argv[0]);
        return 1;
    }

    const char *zipname = argv[1];
    int err = 0;
    zip_t *archive = zip_open(zipname, 0, &err);
    if (!archive) {
        fprintf(stderr, "Could not open zip archive: %s\n", zipname);
        return 1;
    }

    zip_int64_t num_entries = zip_get_num_entries(archive, 0);
    for (zip_int64_t i = 0; i < num_entries; i++) {
        struct zip_stat st;
        zip_stat_init(&st);
        zip_stat_index(archive, i, 0, &st);

        printf("File %lld: %s (size %llu)\n", i, st.name, (unsigned long long)st.size);

        zip_file_t *zf = zip_fopen_index(archive, i, 0);
        if (!zf) {
            fprintf(stderr, "  Could not open file in zip: %s\n", st.name);
            continue;
        }

        // Allocate buffer to read file content
        char *contents = malloc(st.size + 1);
        if (!contents) {
            fprintf(stderr, "  Memory allocation failed\n");
            zip_fclose(zf);
            continue;
        }

        zip_fread(zf, contents, st.size);
        contents[st.size] = '\0';  // Null-terminate to treat as string

        printf("---- Content Start ----\n%s\n---- Content End ----\n\n", contents);

        free(contents);
        zip_fclose(zf);
    }

    zip_close(archive);
    return 0;
}
