#include <stdio.h>
#include <stdbool.h>
// #include <stdlib.h>

int* a;
float* b;
char* c;
bool* d;
char** e;


int main() {
    // a = (int*) malloc(sizeof(int));
    *a = 1;
    *b = 9.5;
    *c = 'c';
    *d = true;
    *e = "Hello.";
}