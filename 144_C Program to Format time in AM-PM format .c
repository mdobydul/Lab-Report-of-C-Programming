#include <stdio.h>

int main() {
    int hour, min, sec;
    char period[3];

    scanf("%d:%d:%d", &hour, &min, &sec);

    if(hour >= 12) {
        if(hour > 12) hour -= 12;
        sprintf(period, "PM");
    } else {
        if(hour == 0) hour = 12;
        sprintf(period, "AM");
    }

    printf("%02d:%02d:%02d %s\n", hour, min, sec, period);
    return 0;
}v
