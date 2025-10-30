#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura Ponto
struct Ponto {
    int x;
    int y;
};

// Fun��o para verificar se o ponto p est� dentro do ret�ngulo definido por v1 e v2
int estaDentro(struct Ponto v1, struct Ponto v2, struct Ponto p) {
    // Assumindo que v1 � inferior esquerdo e v2 � superior direito
    if (p.x >= v1.x && p.x <= v2.x && p.y >= v1.y && p.y <= v2.y) {
        return 1; // Dentro
    } else {
        return 0; // Fora
    }
}

int main() {
    struct Ponto v1, v2, p;

    // Leitura dos pontos
    printf("Digite as coordenadas do vertice inferior esquerdo (v1 x y): ");
    scanf("%d %d", &v1.x, &v1.y);

    printf("Digite as coordenadas do vertice superior direito (v2 x y): ");
    scanf("%d %d", &v2.x, &v2.y);

    printf("Digite as coordenadas do ponto p (x y): ");
    scanf("%d %d", &p.x, &p.y);

    // Verifica��o e impress�o
    if (estaDentro(v1, v2, p)) {
        printf("O ponto esta localizado dentro do retangulo.\n");
    } else {
        printf("O ponto esta localizado fora do retangulo.\n");
    }

    return 0;
}
