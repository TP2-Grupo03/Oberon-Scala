#include <stdio.h>
#include <stdlib.h>

int main() {
    char* x = "-8";
    char* w = "2";
    int y;
    int z;

  
    y = atoi(x);  
    z = atoi(w);  

    printf("y (STRINGTOINT(x)): %d\n", y);
    printf("z (STRINGTOINT(w)): %d\n", z);

    return 0;
}
