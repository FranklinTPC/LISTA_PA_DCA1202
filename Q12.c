//12. Suponha que as seguintes declarações tenham sido realizadas: 

#include <stdio.h>

int main(){
    return 0;

    float aloha[10]; //vetor de 10 posições do tipo float
    float coisas[10][5]; //matriz de 10 linhas e 5 colunas do tipo float
    float *pf; //ponteiro para um valor do tipo float
    float value = 2.2; //variável do tipo float
    int i=3; //variável do tipo int

    //atribui o valor da variável "value" para a 3 posição do vetor aloha
    aloha[2] = value; //Válido

    //input um valor do tipo float e guarda esse valor no vetor "aloha"
    scanf("%f", &aloha);//válido

    //atribui o valor da variável "aloha" para a variável "value"
    printf("%f", aloha); //Válido

    //atribui o valor da quarta posição do vetor aloha a matriz coisas
    coisas[4][4] = aloha[3]; //Válida

    //coisas[5] = aloha; //Inválido
    //coisas = aloha; //Inválido
    //pf = value; //Inválido
    //pf recebe o endereço do vetor na primeira posição
    pf = aloha; 

}
