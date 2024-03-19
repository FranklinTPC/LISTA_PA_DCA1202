//7. Considerando a declaração:

//int mat[4], *p, x;

//quais das seguintes expressões são válidas? Justifique.

//p = mat + 1; 
//p = mat; 
//p = mat; 
//x = (*mat); 

#include <stdio.h>

int main (){
    
    int mat[4], *p, x; // declaração de variáveis

    p = mat + 1; // operação válida, pois o certo é incrementar o endereço de memória
    //p = mat++; // operação inválida pois manipula array de forma errada.
    //p = ++mat; // operação inválida pois manipula array de forma errada.
    x = (*mat)++; // operação válida, pois o certo é incrementar o valor do que está sendo armazenado

    printf("%d",x); // imprime o valor de x
