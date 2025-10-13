#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define M_PI 3.14159265358979323846


int main() {
    float bod = 10000000, bod_v_kruhu = 0;
    float y, x, distance;

        for (int i = 0; i < bod; i++) {
            y = (float)rand() / RAND_MAX;
            x = (float)rand() / RAND_MAX;
            distance = sqrt(x * x + y * y);
            if (distance <= 1) {
                bod_v_kruhu++;
            }
        }
    float pie = 4 * (bod_v_kruhu / bod);
    printf("%.10f", pie);
    printf("\n%.10f", M_PI);
    return 0;
}