#include <stdio.h>
#include <stdlib.h>

int main() {
    char* x = "-8.0";
    char* w = "2.5";
    double y;
    double z;


    y = atof(x);  
    z = atof(w);  
  
    printf("y (STRINGTOREAL(x)): %f\n", y);
    printf("z (STRINGTOREAL(w)): %f\n", z);

    return 0;
}
