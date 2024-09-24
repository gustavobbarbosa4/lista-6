#include <stdio.h>
#include <string.h> 

int calcular_tamanho_manual(char str[]) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {  
        tamanho++;
    }
    return tamanho;
}

int main() {
    char string[101];  

    printf("Digite uma string (ate 100 caracteres): ");
    fgets(string, sizeof(string), stdin);
    
    string[strcspn(string, "\n")] = '\0';

    int tamanho_strlen = strlen(string);

    int tamanho_manual = calcular_tamanho_manual(string);

    printf("\nTamanho calculado com strlen: %d\n", tamanho_strlen);
    printf("Tamanho calculado manualmente: %d\n", tamanho_manual);

   
    if (tamanho_strlen == tamanho_manual) {
        printf("Os dois metodos resultaram no mesmo tamanho.\n");
    } else {
        printf("Os dois metodos resultaram em tamanhos diferentes.\n");
    }

    return 0;
}
