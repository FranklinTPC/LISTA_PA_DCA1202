//13. O que é memory leak? Procure 3 exemplos de programas em C que apresentem memory leak e explique o que acontece em cada um deles. 

//Memory Leak, também conhecido como vazamento de memória, é um problema comum em sistemas de computação que ocorre quando um programa aloca memória, mas não a libera corretamente quando não é mais necessária. Isso resulta em uma perda gradual de memória, que pode levar a problemas de desempenho e até mesmo a falhas no sistema

////////////////////////////////////////////////////////////////////
//Ex 01: Alocação de memória sem liberação

#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    // O ponteiro ptr não é liberado antes do término do programa
    return 0;
}

//A memória é alocada para um inteiro usando malloc, mas free não é chamado para liberar a memória antes do término do programa. Isso resulta em um vazamento de memória.

////////////////////////////////////////////////////////////////////
//Ex 02: Perda de referência

#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    ptr = NULL;
    // A referência para a memória alocada é perdida
    return 0;
}

//A memória é alocada e a referência para essa memória é perdida quando ptr é definido como NULL. Como resultado, não podemos liberar a memória, causando um vazamento de memória.
////////////////////////////////////////////////////////////////////


//Ex 03: Alocação repetida sem liberação

#include <stdlib.h>

int main() {
    int *ptr;
    for(int i=0; i<100; i++) {
        ptr = (int *)malloc(sizeof(int));
    }
    // A memória alocada nas iterações anteriores do loop não é liberada
    free(ptr);
    return 0;
}

//A memória é alocada repetidamente em um loop, mas apenas a memória alocada na última iteração é liberada. Isso resulta em um vazamento de memória.
////////////////////////////////////////////////////////////////////
