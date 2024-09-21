#include <stdio.h>
#include <stdlib.h>  

int x;
int y;
int z;

int main() {
    x = -10;
    y = abs(x);  
    z = abs(y);  

  
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);

    return 0;
}
