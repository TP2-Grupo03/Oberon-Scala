#include <stdio.h>
#include <string.h>

void writeFile(const char* fileName, const char* content) {
    FILE *file = fopen(fileName, "w");  
    if (file != NULL) {
        fputs(content, file);  
        fclose(file);
    }
}

void appendFile(const char* fileName, const char* content) {
    FILE *file = fopen(fileName, "a");  
    if (file != NULL) {
        fputs(content, file);  
        fclose(file);
    }
}

void readFile(const char* fileName, char* buffer, size_t size) {
    FILE *file = fopen(fileName, "r"); 
    if (file != NULL) {
        fread(buffer, 1, size, file);  
        fclose(file);
    }
}

int main() {
    const char* x = "src/test/resources/stdlib/plainFile.txt";
    const char* y = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char w[1024];  

    
    writeFile(x, y);

  
    y = "Testando append";
    appendFile(x, y);

   
    readFile(x, w, sizeof(w));

  
    printf("Conteúdo do arquivo:\n%s\n", w);

    return 0;
}
