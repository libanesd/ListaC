/*
Leonardo H. Zeaim
*/
/*
 Exercicio 3
 Declarar e atribuir valores a uma matriz de inteiros
 3x3 ( int m[3][3] ). Crie um ponteiro para que aponte
 para o elemento a11 ( int* p = &m[0][0] ). Liste a
 matriz na tela utilizando o ponteiro de duas maneiras:
 via ( p[ i ] onde i = 0,1,2,...,8 )
 e através do incremento do ponteiro ( p++ );
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[3][3]={0,1,2,3,4,5,6,7,8};
    int* p = &m[0][0];
    int i;

    printf("%d.\n", p[0]);
    printf("%d.\n", p[1]);
    printf("%d.\n", p[2]);
    printf("%d.\n", p[3]);
    printf("%d.\n", p[4]);
    printf("%d.\n", p[5]);
    printf("%d.\n", p[6]);
    printf("%d.\n", p[7]);
    printf("%d.\n", p[8]);

    printf("Print atraves do laco \n");
    for(i=0;i<9;i++) 
        printf("%d.\n", p[i]);

    return 0;
}