#include <stdio.h>
#include <string.h>
#include <locale.h>

int validar_senha(char senha[]) {
	int i, tamanho;
    int tem_maiuscula = 0, tem_minuscula = 0, tem_numero = 0;

    tamanho = strlen(senha);

    if (tamanho < 8 || tamanho > 100) {
        printf("A senha deve ter entre 8 e 100 caracteres.\n");
        return 0;
    }

    for (i = 0; i < tamanho; i++) {
        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            tem_maiuscula = 1;
        } else if (senha[i] >= 'a' && senha[i] <= 'z') {
            tem_minuscula = 1;
        } else if (senha[i] >= '0' && senha[i] <= '9') {
            tem_numero = 1;
        }
    }

    if (!tem_maiuscula) {
        printf("A senha deve conter pelo menos uma letra maiuscula.\n");
        return 0;
    }
    if (!tem_minuscula) {
        printf("A senha deve conter pelo menos uma letra minuscula.\n");
        return 0;
    }
    if (!tem_numero) {
        printf("A senha deve conter pelo menos um numero.\n");
        return 0;
    }

    return 1;
}

int main() {
	char senha[101]; 

    printf("Digite sua senha: ");
    fgets(senha, sizeof(senha), stdin);

    senha[strcspn(senha, "\n")] = '\0';

    if (validar_senha(senha)) {
        printf("Senha valida!\n");
    } else {
        printf("Senha invalida!\n");
    }

    return 0;
}
