/*
Utilizei o metodo de ordenacao Bubble Sort onde, Deve-se percorrer o
array diversas vezes e, a cada iteração o elemento de
maior valor deve ser levado para o final do array (ou o de
menor valor para o início).
*/

#include <stdio.h>
#include <stdlib.h>

// Função para ordenar um array de floats em ordem crescente usando o Bubble Sort
void ordenar(float *array, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(array[j] > array[j+1]) {
                float temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    float *numeros;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Alocação dinâmica de memória
    numeros = (float*) malloc(n * sizeof(float));

    if(numeros == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Digite os elementos:\n");
    for(int i = 0; i < n; i++) {
        scanf("%f", &numeros[i]);
    }

    // Ordenação dos números
    ordenar(numeros, n);

    printf("Elementos em ordem crescente:\n");
    for(int i = 0; i < n; i++) {
        printf("%f\n", numeros[i]);
    }

    // Liberação da memória alocada
    free(numeros);

    return 0;
}
