/*20.Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.
Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o
resultado deve ficar armazenado em C).*/
#include <stdio.h>
#include <stdlib.h>

// Função para multiplicação de matrizes
void multiplica_matrizes(int **A, int **B, int **C, int linhas_A, int colunas_A, int colunas_B) {
    for (int i = 0; i < linhas_A; i++) {
        for (int j = 0; j < colunas_B; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colunas_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int linhas_A, colunas_A, colunas_B;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linhas_A);

    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &colunas_A);

    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &colunas_B);

    if (colunas_A != colunas_B) {
        printf("As matrizes não são multiplicáveis. O número de colunas de A deve ser igual ao número de linhas de B.\n");
        return 1;
    }

    // Aloca memória para as matrizes A, B e C
    int **A = (int **)malloc(linhas_A * sizeof(int *));
    int **B = (int **)malloc(colunas_A * sizeof(int *));
    int **C = (int **)malloc(linhas_A * sizeof(int *));

    for (int i = 0; i < linhas_A; i++) {
        A[i] = (int *)malloc(colunas_A * sizeof(int));
        C[i] = (int *)malloc(colunas_B * sizeof(int));
    }

    for (int i = 0; i < colunas_A; i++) {
        B[i] = (int *)malloc(colunas_B * sizeof(int));
    }

    // Preencha as matrizes A e B com valores (você pode modificar esta parte)
    printf("Digite os elementos da matriz A (%dx%d):\n", linhas_A, colunas_A);
    for (int i = 0; i < linhas_A; i++) {
        for (int j = 0; j < colunas_A; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (%dx%d):\n", colunas_A, colunas_B);
    for (int i = 0; i < colunas_A; i++) {
        for (int j = 0; j < colunas_B; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Realize a multiplicação das matrizes
    multiplica_matrizes(A, B, C, linhas_A, colunas_A, colunas_B);

    // Imprima a matriz resultante C
    printf("Matriz Resultante C:\n");
    for (int i = 0; i < linhas_A; i++) {
        for (int j = 0; j < colunas_B; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Libere a memória alocada para as matrizes
    for (int i = 0; i < linhas_A; i++) {
        free(A[i]);
        free(C[i]);
    }
    for (int i = 0; i < colunas_A; i++) {
        free(B[i]);
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
