#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno alunos[5];

    // (a) Leitura dos dados de 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa buffer

        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Digite a nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        getchar(); // Limpa buffer

        printf("\n");
    }

    // (b) Encontrar aluno com maior nota na primeira prova
    int indice_maior_nota1 = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].nota1 > alunos[indice_maior_nota1].nota1) {
            indice_maior_nota1 = i;
        }
    }
    printf("Aluno com maior nota na primeira prova: %s (Matricula: %d, Nota: %.2f)\n",
           alunos[indice_maior_nota1].nome, alunos[indice_maior_nota1].matricula, alunos[indice_maior_nota1].nota1);

    // (c) e (d) Encontrar alunos com maior e menor média geral
    float medias[5];
    for (int i = 0; i < 5; i++) {
        medias[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
    }

    int indice_maior_media = 0;
    int indice_menor_media = 0;
    for (int i = 1; i < 5; i++) {
        if (medias[i] > medias[indice_maior_media]) {
            indice_maior_media = i;
        }
        if (medias[i] < medias[indice_menor_media]) {
            indice_menor_media = i;
        }
    }

    printf("Aluno com maior media geral: %s (Matricula: %d, Media: %.2f)\n",
           alunos[indice_maior_media].nome, alunos[indice_maior_media].matricula, medias[indice_maior_media]);

    printf("Aluno com menor media geral: %s (Matricula: %d, Media: %.2f)\n",
           alunos[indice_menor_media].nome, alunos[indice_menor_media].matricula, medias[indice_menor_media]);

    // (e) Verificar aprovação para cada aluno
    printf("\nSituacao dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        float media = medias[i];
        printf("Aluno: %s (Matricula: %d) - Media: %.2f - ", alunos[i].nome, alunos[i].matricula, media);
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
