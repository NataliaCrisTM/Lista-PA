#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value;//válido, receberá o valor salvo em 'value', ou seja, 2.2
    scanf("%f", &aloha);//válido, o conteúdo irá para a posição 0 do vetor aloha
    aloha = "value";//inválido, pois o o vetor é um float e não guarda string.
    printf("%f", aloha);//válido, imprime o valor de aloha[0]
    coisas[4][4] = aloha[3];//válido, gurda na posição [4][4] o valor de aloha[3]
    coisas[5] = aloha;//inválido, pois por ser uma matriz, é necessário o valor do 2º vetor
    pf = value;//inválido, pois pf é um ponteiro
    pf = aloha//válido, pois aloha é um vetor e pf irá guardar seu endereço;
}
