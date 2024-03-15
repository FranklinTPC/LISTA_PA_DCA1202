//1. Seja o seguinte trecho de programa:

#include <stdio.h>

int main(void){

    int i = 3, j = 5;
    int *p, *q;

    p = &i;
    q = &j;
}

//Determine o valor das seguintes expressões, justificando o porquê de cada resultado:

// p == &i; o valor alocado no endereço de p é o valor de i já que p aponta para i;

// *p - *q; o valor de i - o valor de j;

// **&p; imprimirá o próprio valor de i;

// 3 - *p/(*q) + 7; 3 - o valor de i dividido pelo valor de j + 7, será 10 pois a divisão inteira de *p/(*q) ignora os números após a vírgula que se torna 3 - 0 + 7;