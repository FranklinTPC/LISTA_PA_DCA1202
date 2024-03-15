//2. Mostre o que será impresso por programa supondo que a variável i ocupa o endereço 4094 na memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho.

#include <stdio.h>

main(){
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}

//p = 4094 (Hexadecimal) -> 0061FF0C;

//p + 1 = 4096 -> 0061FF10;

//*p + 2 = 7 -> valor do local que o p está apontando + 2;

//**&p = 5 -> O próprio valor o qual o ponteiro está apontando;

//3**p = 15 -> O valor do ponteiro multiplicado por 3;
