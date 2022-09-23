#include <stdio.h>
void somaVetores(int *V1, int *V2, int *VSoma, int tam){
    for(int i=0; i<tam; i++){
        VSoma[i] = V1[i]+V2[i];
    }
    printf("Soma: ");
    for(int i=0; i<tam; i++){
        printf("%d, ", VSoma[i]);
    }
}
int main()
{
    int tam;
    printf("Tamanho dos vetores: ");
    scanf_s("%d", &tam);

    int V1[tam], V2[tam], VSoma[tam];

    printf("Conteudo do vetor1: ");
    for(int i = 0; i<tam; i++){
        scanf_s("%d", &V1[i]);
    }
    printf("Conteudo do vetor2: ");
    for(int i = 0; i<tam; i++){
        scanf_s("%d", &V2[i]);
    }
    somaVetores(&V1, &V2, &VSoma, tam);

}

