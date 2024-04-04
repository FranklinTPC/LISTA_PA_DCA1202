#include <stdio.h>
#include <stdlib.h>

// Função para alocar uma matriz tridimensional
int ***alocarMatriz(int altura, int largura, int profundidade) {
    int ***matriz;

    // Aloca um array de ponteiros de altura
    matriz = (int ***)malloc(altura * sizeof(int **));
    if (matriz == NULL) {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }

    // Aloca um array de ponteiros de largura para cada linha da matriz
    for (int i = 0; i < altura; i++) {
        matriz[i] = (int **)malloc(largura * sizeof(int *));
        if (matriz[i] == NULL) {
            printf("Erro de alocação de memória!\n");
            exit(1);
        }
    }

    // Aloca um array de inteiros para cada célula da matriz
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            matriz[i][j] = (int *)malloc(profundidade * sizeof(int));
            if (matriz[i][j] == NULL) {
                printf("Erro de alocação de memória!\n");
                exit(1);
            }
        }
    }

    return matriz;
}

// Função para liberar a memória alocada para a matriz tridimensional
void liberarMatriz(int ***matriz, int altura, int largura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }
    free(matriz);
}

// Função para imprimir um plano da matriz tridimensional
void imprimirPlano(int ***matriz, int altura, int largura, int profundidade, int plano) {
    printf("Plano %d:\n", plano);
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            printf("%d ", matriz[i][j][plano]);
        }
        printf("\n");
    }
}

int main() {
    int altura, largura, profundidade;
    printf("Digite as dimensões da matriz tridimensional (altura largura profundidade): ");
    scanf("%d %d %d", &altura, &largura, &profundidade);

    // Aloca a matriz tridimensional
    int ***matriz = alocarMatriz(altura, largura, profundidade);

    // Inicializa a matriz com zeros
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                matriz[i][j][k] = 0;
            }
        }
    }

    // Teste para modificar um elemento da matriz
    int i, j, k, novoEstado;
    printf("Digite as coordenadas do elemento que deseja modificar (altura largura profundidade): ");
    scanf("%d %d %d", &i, &j, &k);
    printf("Digite o novo estado do elemento (0 ou 1): ");
    scanf("%d", &novoEstado);
    matriz[i][j][k] = novoEstado;

    // Teste para imprimir um plano da matriz
    int plano;
    printf("Digite o número do plano que deseja imprimir: ");
    scanf("%d", &plano);
    imprimirPlano(matriz, altura, largura, profundidade, plano);

    // Libera a memória alocada para a matriz
    liberarMatriz(matriz, altura, largura);

    return 0;
}