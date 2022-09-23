#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int tam, aux;

    printf("Tamanho do vetor:");
    scanf_s("%d", &tam);

    float *p = (float*) malloc(tam*sizeof(float));

    for(int i = 0; i < tam; i++){
        scanf("%f", &p[i]);
    }

    for(int i = 0; i<tam; i++){
        for(int j = i+1; j<tam; j++){

            if(p[i]>p[j]){
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }

    for(int i=0;i<tam;i++){
            if(i==tam-1){
            printf("%.2f ",p[i]);
            }
            else{
                printf("%.2f, ",p[i]);
            }
        }

        free(p);

}
