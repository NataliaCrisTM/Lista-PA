#include <stdio.h>

int main()
{
    int i = 3;
    int j = 5;
    int *p, *q;

    p = &i;
    q = &j;

    p == &i; /*esta operação diz que 'p' é igual igual ao endereço de ir, o que é verdadeiro
              já que em p foi salvo o endereço de i;*/
    *p - *q; // vai resultar em -2, pois está subtraido o conteúdo salvo em i e j, 3-5=-2;

    **&p;// 3

    3 - *p/(*q) + 7; /*o resultado será 10, pois a operação com os ponteiros resultará em 0
                    já que ficará 3/5, e como o tipo é inteiro, retorna o número inteiro. então sobrará apenas
                     3+10*/
}
