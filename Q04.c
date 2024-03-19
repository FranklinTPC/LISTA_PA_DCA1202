// 4. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
// foram obtidas as respostas esperadas, justificando o porquê de cada uma).

#include <stdio.h>

int main() {
    int valor;
    int *p1; // Ponteiro
    float temp;
    float *p2; // Ponteiro
    char aux;
    char *nome = "Ponteiros"; // Ponteiro para uma string constante
    char *p3; // Ponteiro
    int idade;
    int vetor[3];
    int *p4; // Ponteiro
    int *p5; // Ponteiro

    // (a)
    valor = 10;
    p1 = &valor; // p1 guarda o endereço de valor
    *p1 = 20;    // conteúdo de valor = 20
    printf("%d \n", valor);

    // (b)
    temp = 26.5;
    p2 = &temp;  // p2 = endereço de temp
    *p2 = 29.0;  // temp = 29.0
    printf("%.1f \n", temp);

    // (c)
    p3 = &nome[0]; // p3 = endereço do primeiro caractere de nome
    aux = *p3;     // aux = conteúdo apontado por p3 = nome[0] = 'P'
    printf("%c \n", aux);

    // (d)
    p3 = &nome[4];
    aux = *p3; // aux = 'e'
    printf("%c \n", aux);

    // (e)
    // Esperado: "Ponteiros"
    p3 = nome; // p3 aponta para o primeiro caractere de nome
    printf("%c \n", *p3); // = 'P'

    // (f)
    p3 = p3 + 4; // avança 4 posições em nome
    printf("%c \n", *p3); // = 'e'

    // (g)
    p3--; // retrocede 1 posição
    printf("%c \n", *p3); // = 't'

    // (h)
    vetor[0] = 31; // atribuindo valores às posições
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor; // p4 aponta para o primeiro elemento de vetor
    idade = *p4;
    printf("%d \n", idade); // = 31

    // (i)
    p5 = p4 + 1; // p5 aponta para o segundo elemento de vetor
    idade = *p5;
    printf("%d \n", idade); // = 45

    // (j)
    p4 = p5 + 1; // p4 aponta para o terceiro elemento de vetor
    idade = *p4;
    printf("%d \n", idade); // = 27

    // (l)
    p4 = p4 - 2; // p4 retrocede 2 posições
    idade = *p4;
    printf("%d \n", idade); // = 31

    // (m)
    p5 = &vetor[2] - 1; // p5 aponta para o segundo elemento de vetor
    printf("%d \n", *p5); // = 45

    // (n)
    p5++; // avança 1 posição
    printf("%d \n", *p5); // = 27

    return 0;
}
