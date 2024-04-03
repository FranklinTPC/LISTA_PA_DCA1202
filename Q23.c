//

#include <stdio.h>
#define TAM 10
int funcaol(int vetor[], int v){
  int i;
  for (i = 0; i < TAM; i++){
  if (vetor[i] == v)
  return i;
  }
  return -1;
}
int funcao2(int vetor[], int v, int i, int f){
  int m = (i + f) / 2;
  if (v == vetor[m])
  return m;
  if (i >= f)
  return -1;
  if (v > vetor[m])
  return funcao2(vetor, v, m+l, f);
  else
  return funcao2(vetor, v, i, m-1);
}
  int main(){
  int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
  return 0;
}

/*
I. O resultado da impressão na linha 24 é: 7 - 7. A função funcao1 percorre o vetor até encontrar o valor 15, que está na posição 7 (a contagem começa em 0). A função funcao2 implementa uma busca binária, que também encontrará o valor 15 na posição 7. Portanto, a afirmação I está correta.

II. A função funcao1, no pior caso, é uma estratégia mais rápida do que a funcao2. A função funcao1 implementa uma busca linear, que tem complexidade O(n), enquanto a função funcao2 implementa uma busca binária, que tem complexidade O(log n). No pior caso, a busca binária é mais rápida do que a busca linear. Portanto, a afirmação II está incorreta.

III. A função funcao2 implementa uma estratégia iterativa na concepção do algoritmo. A função funcao2 implementa uma busca binária, mas faz isso de forma recursiva, não iterativa. Portanto, a afirmação III está incorreta.

Portanto, é correto o que se afirma em I, apenas. Então, a resposta correta é a opção IV.
*/