//19. Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). 
//Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. 
//A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor. Exemplo:

#include <stdio.h>
#include <stdlib.h>

// Função para realizar a soma de vetores
void soma_vetores(int tamanho) {
    int *vet1 = (int *)malloc(tamanho * sizeof(int));
    int *vet2 = (int *)malloc(tamanho * sizeof(int));
    int *resultado = (int *)malloc(tamanho * sizeof(int));

    if (vet1 == NULL || vet2 == NULL || resultado == NULL) {
        printf("Erro na alocação de memória.\n");
        return;
    }

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }

    printf("Resultado da soma dos vetores:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vet1);
    free(vet2);
    free(resultado);
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido dos vetores.\n");
        return 1;
    }

    soma_vetores(tamanho);

    return 0;
}
