#include <stdio.h>
#include <math.h> 

int main() {
    double x = 10.8;
    double w = 50.1;
    int y = (int)floor(x);  
    int z = (int)floor(w);  


    printf("y (FLOOR(x)): %d\n", y);
    printf("z (FLOOR(w)): %d\n", z);

    return 0;
}
