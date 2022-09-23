#include <stdio.h>
#include <stdlib.h>
void Multiplicar(int **a, int **b, int **c, int nla, int ncola, int ncolb){
    int aux;
    for(int i=0; i<nla;i++){
        for(int j=0; j<ncolb;j++){
            aux = 0;
            for(int k = 0; k < ncolb; k++){
                aux += a[i][k] * b[k][j];
            }
            c[i][j] = aux;
            aux = 0;
        }
    }
}
int main()
{
    int **a, **b, **c;
    int nla = 3, ncola = 3, nlb = 4, ncolb = 3;

    a = (int**)malloc(nla*sizeof(int*));
    a[0] = (int*)malloc(nla*ncola*sizeof(int*));

    for(int i=1; i<nla;i++){
        a[i] = a[i-1] + ncola;
    }

    b = (int**)malloc(nlb*sizeof(int*));
    b[0] = (int*)malloc(nlb*ncolb*sizeof(int*));

    for(int i=1; i<nlb;i++){
        b[i] = b[i-1] + ncolb;
    }

    c = (int**)malloc(nla*sizeof(int*));
    c[0] = (int*)malloc(nla*ncolb*sizeof(int*));

    for(int i=1; i<nla;i++){
        c[i] = c[i-1] + ncolb;
    }

    a[0][0] = 4; a[0][1] = 1; a[0][2] = 9;
    a[1][0] = 8; a[1][1] = 7; a[1][2] = 6;
    a[2][0] = 5; a[2][1] = 8; a[2][2] = 3;

    b[0][0] = 8; b[0][1] = 9; b[0][2] = 1; b[0][3]=7;
    b[1][0] = 7; b[1][1] = 0; b[1][2] = 8; b[1][3]=5;
    b[2][0] = 1; b[2][1] = 2; b[2][2] = 5; b[2][3]=3;

    Multiplicar(a, b, c, nla, ncola, ncolb);
    printf("C:");
    for(int i = 0; i<nla; i++){
        for(int j = 0; j<ncolb; j++){
            printf("%d, ",c[i][j]);

        }
        printf("\n");
    }
    free(a[0]);
    free(a);

    free(b[0]);
    free(b);

    free(c[0]);
    free(c);

    return 0;
}
