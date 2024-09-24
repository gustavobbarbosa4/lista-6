#include <stdio.h>
#include <string.h>
#include <ctype.h>

void limpar_string(char str[], char str_limpa[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {  
            str_limpa[j] = tolower(str[i]); 
            j++;
        }
    }
    str_limpa[j] = '\0'; 
}

int eh_palindromo(char str[]) {
    int tamanho = strlen(str);
    
    for (int i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1;  
}

int main() {
    char string[201]; 
    char string_limpa[201];  

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    limpar_string(string, string_limpa);

    if (eh_palindromo(string_limpa)) {
        printf("A string eh um palindromo.\n");
        printf("String limpa: %s\n", string_limpa); 
    } else {
        printf("A string nao eh um palindromo.\n");
    }

    return 0;
}
