#include <stdio.h>
#include <stdlib.h>

// Função de comparação para o qsort
int comparar(const void *a, const void *b) {
    float valorA = *((float *)a);
    float valorB = *((float *)b);
    
    if (valorA < valorB) return -1;
    if (valorA > valorB) return 1;
    return 0;
}

int main() {
    int n;

    printf("Quantos valores deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido de valores.\n");
        return 1;
    }

    // Aloca dinamicamente um array de floats com n elementos
    float *valores = (float *)malloc(n * sizeof(float));

    if (valores == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Lê os valores do usuário
    printf("Insira %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Usa a função qsort para ordenar os valores em ordem crescente
    qsort(valores, n, sizeof(float), comparar);

    // Exibe os valores em ordem crescente
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(valores);

    return 0;
}