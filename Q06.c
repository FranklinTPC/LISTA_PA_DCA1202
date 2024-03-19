//6. Assumindo que pulo [ ] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?

#include <stdio.h>

int main(){
    int pulo[4]; // Declaração de um vetor de inteiros com 4 posições.

    *(pulo + 2); // Acessa o terceiro elemento do vetor.

    *(pulo + 4); // Tenta acessar um elemento fora dos limites do vetor 'erro'.

    pulo + 4; // Calcula o endereço do quinto elemento do vetor.

    pulo + 2; // Calcula o endereço do terceiro elemento do vetor.

    return 0;
}

