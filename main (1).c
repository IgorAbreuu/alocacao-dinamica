#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float *notas, notatotal, media;

  printf("Quantos alunos serão cadastrados?\n");
  scanf("%d",&n);
  notas = (float *) malloc(n*sizeof(float));

  for(int i=0;i<n;i++){
    printf("Nota do %dº aluno:\n",i+1);
    scanf("%f",&notas[i]);
    notatotal=(notatotal+notas[i]);
  }
  media=notatotal/n;

  printf("A média aritmética é: %.2f",media);

  free(notas);
  return 0;
}