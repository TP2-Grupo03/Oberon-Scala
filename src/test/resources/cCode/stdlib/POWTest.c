#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double y;
    double z;
    double w;
    double a;
    double b;

    x = 2.5;
    y = -1.5;
    a = -9.0;
    b = 3.0;

    z = pow(x, y);  
    w = pow(a, b);  

    printf("z (pow(x, y)): %f\n", z);
    printf("w (pow(a, b)): %f\n", w);

    return 0;
}
