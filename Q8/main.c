#include <stdio.h>

int main()
{
    nt vet[] = {4,9,13};//é criado um vetor com 3 elementos.
      int i;
      for(i=0;i<3;i++){//irá imprimir os valores dos elementos do vetor
      printf("%d ",*(vet+i));
      }
      int vet[] = {4,9,13};
                 int i;
                 for(i=0;i<3;i++){
                     printf("%X ",vet+i);//irá imprimir os endereços dos elementos do vetor
                 }
}
