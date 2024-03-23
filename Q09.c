#include <stdio.h>
struct teste{
  int x = 3;
  char nome[] = "jose";
};
main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->name);
}

// Ocorre tres erros, um de impresao, pois uma struct nao pode ser inicializada com valores, 
//o segundo erro é que a variavel nome foi declarada como char nome[] e foi chamada como name, 
//e o terceiro erro é que a variavel s nao foi alocada na memoria, logo nao pode ser acessada.