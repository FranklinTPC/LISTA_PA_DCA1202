//5. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e explique se foram obtidas as respostas esperadas).
#include <stdio.h>
int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i);
  printf(" vet[%d] = %.1f",i, vet[i]);
  printf(" *(f + %d) = %.1f",i, *(f+i));
  printf(" &vet[%d] = %X",i, &vet[i]);
  printf(" (f + %d) = %X",i, f+i);
  printf("\n");
  }
}
//saídas :
//i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 61FF04 (f + 0) = 61FF04
//i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 61FF08 (f + 1) = 61FF08
//i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 61FF0C (f + 2) = 61FF0C
//i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 61FF10 (f + 3) = 61FF10
//i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 61FF14 (f + 4) = 61FF14

//a primeira indica o índice 1 do contador do laço for, o segundo mostra o valor da posição atual do vetor, o terceiro mostra o valor do vetor, o quarto valor da variável que recebe a posição atual do vetor, o quinto mostra o local da memória na qual a posição do vetor está e o sexto mostra o local da memória da variável que recebe a posição atual do vetor.
