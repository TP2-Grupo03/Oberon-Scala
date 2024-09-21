#include <stdio.h>

typedef int (*ld)(int);


int lambda_0(int a) {
    return a + 10;
}

int main() {

    ld x;


    x = lambda_0;

}
