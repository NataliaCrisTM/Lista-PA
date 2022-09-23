#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    // p terá o endereço de i, logo será impresso 4094;
    //*p+2 será impresso 7, pois será o valor contido no endereço de i, 5 + 2;
    //**&p será impresso 5, pois é o valor conido em i;
    //3**p será 15, pois é o valor contido em i, que está em p, multiplicado por 3;
    //**&p+4 será 9, pois é o valor de i, que está em p, somado 4;
    return 0;
}
