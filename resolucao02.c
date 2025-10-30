#include <stdio.h>
#include <string.h>

// Definindo a estrutura para armazenar os dados de uma pessoa
struct Pessoa {
    char nome[100];
    char endereco[200];
    char telefone[20];
};

int main() {
    struct Pessoa pessoas[5]; // Array de 5 estruturas
    int i, j;

    // Leitura dos dados para 5 pessoas
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        // Remover o '\n' do final da string
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Digite o endereco da pessoa %d: ", i + 1);
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0';

        printf("Digite o telefone da pessoa %d: ", i + 1);
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0';

        printf("\n");
    }

    // Ordenação em ordem alfabética pelo nome (usando bubble sort)
    struct Pessoa temp;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0) {
                // Troca as estruturas
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }

    // Impressão dos dados ordenados
    printf("Dados das pessoas em ordem alfabética:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereco: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}
