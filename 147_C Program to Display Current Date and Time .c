#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);            // Get current time
    struct tm *tm_info = localtime(&t); // Convert to local time

    printf("Current Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n",
           tm_info->tm_mday,
           tm_info->tm_mon + 1,      // tm_mon is 0-11
           tm_info->tm_year + 1900,  // tm_year is years since 1900
           tm_info->tm_hour,
           tm_info->tm_min,
           tm_info->tm_sec);

    return 0;
}
