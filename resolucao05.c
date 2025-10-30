#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    char nome[100];
    int matricula;
    char curso[100];
};

int main() {
    struct Aluno alunos[5]; // Vetor para armazenar 5 alunos

    // Leitura dos dados dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // Remove o '\n'

        printf("Digite o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer após scanf

        printf("Digite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
        alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0'; // Remove o '\n'

        printf("\n");
    }

    // Impressão dos dados dos alunos
    printf("Dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("\n");
    }

    return 0;
}
