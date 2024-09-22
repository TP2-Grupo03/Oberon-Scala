#include <stdio.h>
#include <stdbool.h>

int main() {
    int x;
    int y;
    bool z;
    bool w;

    x = 10;
    y = 11;
    z = x % 2 != 0;  
    w = y % 2 != 0;  

    printf("z (ODD(x)): %s\n", z ? "true" : "false");
    printf("w (ODD(y)): %s\n", w ? "true" : "false");

    return 0;
}
