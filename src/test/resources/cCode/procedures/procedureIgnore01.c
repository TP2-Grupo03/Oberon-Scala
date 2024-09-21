#include <stdio.h>
#include <assert.h>

// Macro para ignorar testes (simula o comportamento de IGNORE)
#define IGNORE_TEST

int main() {
    
    #ifdef IGNORE_TEST
   
    #endif

 
    printf("oi\n");

    return 0;
}
