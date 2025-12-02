#include <stdio.h>
#include <time.h>
#include <unistd.h>  // For sleep() on Linux/macOS. On Windows, use <windows.h> and Sleep()

int main() {
    while(1) {
        time_t t = time(NULL);
        struct tm *tm_info = localtime(&t);

        int hour = tm_info->tm_hour;
        int min = tm_info->tm_min;
        int sec = tm_info->tm_sec;
        char period[3];

        if(hour >= 12) {
            if(hour > 12) hour -= 12;
            sprintf(period, "PM");
        } else {
            if(hour == 0) hour = 12;
            sprintf(period, "AM");
        }

        // Clear screen (Linux/macOS). For Windows, use system("cls")
        printf("\033[H\033[J"); 
        printf("Digital Clock: %02d:%02d:%02d %s\n", hour, min, sec, period);

        sleep(1);  // Wait for 1 second
    }
    return 0;
}
