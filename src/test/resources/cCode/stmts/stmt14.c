#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int x, y;


int main() {
    scanf("%d", &x);
    y = x;
    while (y > 0) {
        y = y - 2;
        printf("%d\n", y);
    }
}