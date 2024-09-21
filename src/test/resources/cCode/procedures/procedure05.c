#include <stdio.h>

int a, b;
int c;

void mult(int i, int a, int *res) {
    *res = i * a;
}

int main() {

    scanf("%d", &a);
    scanf("%d", &b);

    mult(b, a, &c);

    printf("%d\n", c);

    return 0;
}
