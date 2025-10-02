#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int bod = 100000, bod_v_kruhu = 0;
    float y
    float x

  for (int i = 0; i < bod; i++){
    y = (float) rand() / RAND_MAX;
    x = (float) rand() / RAND_MAX;
    float distance = sqrt(x * x) + (y * y);
if (distance <= 1){
    bod_v_kruhu++;
}
  }
float M_PI = 4 * bod_v_kruhu / bod;
prinf("%f", M_PI);
return 0;
}