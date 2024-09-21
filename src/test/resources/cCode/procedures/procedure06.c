#include <stdio.h>

int a;
int b;
int c;

void inc(int *x) {
    *x = *x + 1;
}

int teste(int y) {
    y = 0;
    inc(&y);
    return y;
}

int main() {
    a = 2;
    b = 3;

    c = teste(a);  
    inc(&b);  


    printf("%d\n", c); 
    printf("%d\n", a); 
    printf("%d\n", b); 

    return 0;
}
