#include <stdio.h>
#include <stdbool.h>  


#define z (5 * 10)  // Expressão constante

int abc;     
bool def;    

int main() {

    abc = 0;    
    def = false; 


    printf("Valor de z: %d\n", z);
    printf("Valor de abc: %d\n", abc);
    printf("Valor de def: %s\n", def ? "true" : "false");

    return 0;
}
