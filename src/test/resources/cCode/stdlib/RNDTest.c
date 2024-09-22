#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x;
    double w;
    int y;
    int z;

    w = -0.9;
    x = 10.4;

   
    y = (int) round(x);  
    z = (int) round(w); 

    printf("y (RND(x)): %d\n", y);
    printf("z (RND(w)): %d\n", z);

    return 0;
}
