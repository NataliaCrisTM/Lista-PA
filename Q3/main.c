#include <stdio.h>

int main()
{
    p = i;
    q = &j;
    p = &*&i;
    i = (*&)j; //ilegal
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q//ilegal, pois é uma operação feita com lixo de memória;

    return 0;
}
