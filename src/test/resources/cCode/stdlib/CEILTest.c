#include <stdio.h>
#include <math.h>  

int main() {
    double x = 10.0;
    double y = 11.6;
    int z = (int)ceil(x);  
    int w = (int)ceil(y);  


    printf("z (CEIL(x)): %d\n", z);
    printf("w (CEIL(y)): %d\n", w);

    return 0;
}
