#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}

/*int const *x = 3; está tentando atribuir o valor inteiro 3 a um ponteiro para um int const. 
Isso é incorreto porque um ponteiro deve ser inicializado com o endereço de uma variável ou com NULL, não com um valor inteiro. 
Além disso, const significa que o valor apontado pelo ponteiro não pode ser alterado.*/

/*++(*x) está tentando incrementar o valor apontado por x. Isso é incorreto porque x é um ponteiro para um int const, 
o que significa que o valor apontado por x não pode ser alterado.*/