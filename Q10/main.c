#include <stdio.h>

int main()
{
    char VChar[4];
    int VInt[4];
    float VFloat[4];
    double VDouble[4];

    for(int i=0; i<4;i++){
        printf("%d", (VChar+i));
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<4;i++){
        printf("%d", (VInt+i));
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<4;i++){
        printf("%d", (VFloat+i));
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<4;i++){
        printf("%d", (VDouble+i));
        printf("\n");
    }
    printf("\n");
    printf("\n");
}
/*Os endereços em char: 6422028;6422029;6422030;6422021
  Os endereços em int: 6422000;6422004;6422008;6422012
  Os endereços em float: 6421984;6421988;6421992;6421996
  Os endereços em double: 6421952;6421960;6421968;6421976
