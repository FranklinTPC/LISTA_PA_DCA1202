//14. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso. 
//Explique seu programa, comentando cada uma das linhas de código. 

//Um ponteiro para uma função é um recurso em linguagens de programação como C que permite armazenar o endereço de uma função em uma variável.
// Isso é útil porque permite que a função seja chamada indiretamente através do ponteiro, e também permite que a função seja passada como um argumento para outras funções.

#include <stdio.h>

// Declaração da função
void minhaFuncao(int num) {
    printf("Valor: %d\n", num);
} //Define uma função que recebe um inteiro como argumento e imprime esse valor.

int main() {
    // Declaração do ponteiro para a função
    void (*ponteiroFuncao)(int); //Declara um ponteiro para uma função que recebe um inteiro como argumento e não retorna nada (void).

    // Atribuição do endereço da função ao ponteiro
    ponteiroFuncao = minhaFuncao;

    // Chamada da função através do ponteiro
    (*ponteiroFuncao)(5); // e passa 5 como argumento para ser impresso na saida.

    return 0;
}
