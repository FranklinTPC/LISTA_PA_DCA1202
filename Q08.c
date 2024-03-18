//8. O que fazem os seguintes programas em C?

#include <stdio.h>

int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }
} // imprime os valores gravados no vetor.

int main(){   
int vet[] = {4, 9, 13};   
int i;   
for(i=0;i<3;i++){   
printf("%X ",vet+i);   
} 
} // imprime os locais de memória dos valores gravados no vetor.