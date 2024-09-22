#include <stdio.h>

int main() {
    int x;
    float y;
    float z;
    int w;

    w = 2;
    x = -8;
    y = (float) x; 
    z = (float) w;  

    printf("y: %f\n", y);
    printf("z: %f\n", z);

    return 0;
}
