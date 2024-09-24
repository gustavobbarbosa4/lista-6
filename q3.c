#include <stdio.h>
#include <string.h>

int main() {
    char string[101]; 

    printf("Digite uma string (ate 100 caracteres): ");
    fgets(string, sizeof(string), stdin);
    
    string[strcspn(string, "\n")] = '\0';

    int tamanho = strlen(string);

    printf("String invertida: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        putchar(string[i]);
    }
    printf("\n");

    return 0;
}
