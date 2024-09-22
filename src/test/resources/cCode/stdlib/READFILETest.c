#include <stdio.h>
#include <stdlib.h>

int main() {
    char* x = "src/test/resources/stdlib/plainFile.txt";
    char* y = NULL;
    long length;
    FILE *f = fopen(x, "r");

    if (f) {
        
        fseek(f, 0, SEEK_END);
        length = ftell(f);
        fseek(f, 0, SEEK_SET);

      
        y = malloc(length + 1);
        if (y) {
           
            fread(y, 1, length, f);
            y[length] = '\0'; 
        }
        fclose(f);
    }

    if (y) {
        printf("Conteúdo do arquivo:\n%s\n", y);
        free(y);  // Libera a memória alocada
    } else {
        printf("Erro ao ler o arquivo.\n");
    }

    return 0;
}
