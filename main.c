#include <stdio.h>
#include <stdlib.h>

int main() {
  int *idade;
  int n;
  int maior=0, menor=0;

  printf("Quantas pessoas você vai cadastrar a idade?\n");
  scanf("%d",&n);
  printf("\n");

  idade = (int *) malloc(n*sizeof(int));

  for(int i=0;i<n;i++){
    printf("Idade da pessoa %d:\n",i+1);
    scanf("%d",&idade[i]);
    if(idade[i] >= 18){
      maior++;
    }
    else{
      menor++;
    }
  }
  printf("\n");
  printf("===================================\n");
  printf("Existem %d maiores de idade!\n",maior);
  printf("Existem %d menores de idade!\n",menor);
  printf("===================================\n");
  
  free(idade);
  return 0;
}