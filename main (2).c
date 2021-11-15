#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*vet, i;
    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &n);

    int criar(int *vet, int n);
    criar(vet,n);

    printf("Preencha o vetor com o valor desejado!\n");
    for(i=0;i<n;i++){
        printf("Vetor [%d]:\t",i);
        scanf("%d", &vet[i]);
    }

    void imprima(int *vet, int n);
    imprima(vet, n);

    void libera(int *vet);
    libera(vet);

    printf("O vetor depois de liberar\n");
    for(i=0;i<n;i++){
        printf("Vetor [%d]: %d\n", i,vet[i]);
    }
}
int criar(int *vet, int n){
        vet=(int*) malloc(n*sizeof(int));
    return *vet;
}
void imprima(int *vet, int n){
    int i;
    printf("\n");
    printf("O vetor com os valores finais:\n");
    for(i=0;i<n;i++){
        printf("Vetor [%d]: %d\n", i,vet[i]);
    }
}
void libera(int *vet){
        free(vet);
}