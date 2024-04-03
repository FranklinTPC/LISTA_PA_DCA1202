#include <stdio.h>

int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;// Isso atribui a a x, b a y e a soma de a e b a z.
  while (a) {
  x = x | b; // Operacao bit a bit OR
  y = y ^ a; // Operacao bit a bit XOR
  z = z & (a+b); //Operacao bit a bit AND
  a = a >> 1; //Isso desloca os bits de a uma posição para a direita (dividindo a por 2) 
  b = b << 1; //Isso desloca os bits de b uma posição para a esquerda (multiplicando b por 2).
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}

//saida foi: 15 13 0