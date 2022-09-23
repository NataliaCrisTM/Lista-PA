#include <stdio.h>

int main()
{
    int mat[4], *p, x;
    p = mat + 1;//válida, pois 'p' recebe o endereço do segundo elemento do vetor.
    p = mat++;//inválida, pois '++' não pode ser utilizado em um vetor.
    p = ++mat;//inválida, pois '++' não pode ser utilizado em um vetor.
    x = (*mat)++;//válida, pois x rcebe o valor da soma do primeiro elemento do vetor +1.
}
