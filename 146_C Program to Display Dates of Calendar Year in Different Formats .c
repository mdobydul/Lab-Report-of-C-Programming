#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    int day = tm_info->tm_mday;
    int month = tm_info->tm_mon + 1; // tm_mon ranges from 0-11
    int year = tm_info->tm_year + 1900; // tm_year is years since 1900

    // Format 1: DD-MM-YYYY
    printf("Date Format 1: %02d-%02d-%04d\n", day, month, year);

    // Format 2: MM/DD/YYYY
    printf("Date Format 2: %02d/%02d/%04d\n", month, day, year);

    // Format 3: YYYY.MM.DD
    printf("Date Format 3: %04d.%02d.%02d\n", year, month, day);

    // Format 4: Full Month Name DD, YYYY
    char buffer[50];
    strftime(buffer, sizeof(buffer), "%B %d, %Y", tm_info);
    printf("Date Format 4: %s\n", buffer);

    return 0;
}
