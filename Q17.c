#include <stdio.h>
#include <stdlib.h>

// Protótipo da função de comparação personalizada
typedef int (*Comparacao)(const void *a, const void *b);

// Função de comparação para inteiros (ordem decrescente)
int compararInteirosDecrescente(const void *a, const void *b) {
    int valorA = *((int *)a);
    int valorB = *((int *)b);

    if (valorA > valorB) return -1;
    if (valorA < valorB) return 1;
    return 0;
}

// Função de ordenação personalizada para inteiros
void ordenarInteiros(int *arr, int n, Comparacao comparar) {
    qsort(arr, n, sizeof(int), comparar);
}

int main() {
    int n;

    printf("Quantos números inteiros deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido de elementos.\n");
        return 1;
    }

    int *numeros = (int *)malloc(n * sizeof(int));

    if (numeros == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Insira os números inteiros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    // Chama a função de ordenação personalizada e passa a função de comparação
    ordenarInteiros(numeros, n, compararInteirosDecrescente);

    printf("Números inteiros em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);

    return 0;
}