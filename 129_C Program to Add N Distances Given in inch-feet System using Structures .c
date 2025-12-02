#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Distance d[n], sum = {0, 0.0};

    for(int i = 0; i < n; i++)
        scanf("%d %f", &d[i].feet, &d[i].inch);

    for(int i = 0; i < n; i++) {
        sum.feet += d[i].feet;
        sum.inch += d[i].inch;
    }

    if(sum.inch >= 12) {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = sum.inch - ((int)(sum.inch / 12) * 12);
    }

    printf("%d feet %.2f inch\n", sum.feet, sum.inch);

    return 0;
}
