#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Vetor
struct Vetor {
    float x;
    float y;
    float z;
};

int main() {
    struct Vetor v1, v2, soma;

    // Leitura do primeiro vetor
    printf("Digite as coordenadas do primeiro vetor (x y z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    // Leitura do segundo vetor
    printf("Digite as coordenadas do segundo vetor (x y z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    // Cálculo da soma
    soma.x = v1.x + v2.x;
    soma.y = v1.y + v2.y;
    soma.z = v1.z + v2.z;

    // Impressão do resultado
    printf("A soma dos vetores e: (%.2f, %.2f, %.2f)\n", soma.x, soma.y, soma.z);

    return 0;
}
