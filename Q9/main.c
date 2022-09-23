#include <stdio.h>

int main()
{
    //x declarado como char:
    /*o endereço avançará um byte em cada elemento do vetor
     exemplo: x+1 = 4093; x+2 = 4094*/

    //x declarado como int:
    /*o endereço avançará quatro bytes em cada elemento do vetor
     exemplo: x+1 = 4096; x+2 = 4100*/

    //x declarado como float:
    /*o endereço avançará quatro bytes em cada elemento do vetor
     exemplo: x+1 = 4096; x+2 = 4100*/

    //x declarado como double:
    /*o endereço avançará oito bytes em cada elemento do vetor
     exemplo: x+1 = 4100; x+2 = 4108*/
}
