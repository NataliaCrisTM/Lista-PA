#include<stdio.h>
#include<stdlib.h>

int Comparar(const void *x, const void *y){//função para comparar 2 valores
    return *(int*)x - *(int*)y;
}
int main()
{
    int tam, (*compara)();
    compara = Comparar;//compara aponta para Comparar

    printf("Tamanho do vetor:");
    scanf_s("%d", &tam);

    float *p = (float*) malloc(tam*sizeof(float));//aloca espaço de memória

    for(int i = 0; i < tam; i++){
        scanf("%f", &p[i]);
    }

    qsort(p,tam, sizeof(int), compara);

    for(int i = 0; i<tam; i++){
        printf("%f ",*(p+i));//imprime os elementos
    }
    free(p); //libera memória alocada


    return 0;
}
