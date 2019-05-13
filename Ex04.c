/*
Leonardo H. Zeaim
*/
/*
 Exercicio 4
 Crie três vetores, de char, int e long double,
 contendo 100 elementos cada um. Faça um programa que
 preencha todos estes vetores com valores aleatórios e,
 em seguida, usando sizeof, calcule o tamanho ocupado
 em memória de cada um dos vetores e exiba na tela.
 Finalmente, imprimir na tela o conteúdo dos vetores.
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int i[100];
    char c[100];
    long double d[100];
    int x;

    for(x=0;x<100;x++){
        i[x]=rand()%100;
        c[x]='A'+(rand()%26);//considerando que tem 26 letras
        d[x]=(long double)rand();
    }

    printf("Tamanho do inteiro \"i\" = %d"
           "Tamanho do tipo \"int\" = %d"),
           sizeof(i), sizeof(int);
    printf("\n");
    printf("Tamanho do char \"c\" = %d"
           "Tamanho do tipo \"char\" = %d"),
            sizeof(c), sizeof(char);
    printf("\n");
    printf("Tamanho do long double \"d\" = %d"
           "Tamanho do tipo \"long double\" = %d"),
            sizeof(d), sizeof(long double);
    printf("\n");


    
    for(x=0;x<100;x++){
        printf("int:\n %d \n,",i[x]);
    }
    printf("\n");

    for(x=0;x<100;x++){
        printf("char:\n %c \n,",c[x]);
    }
    printf("\n");

    for(x=0;x<100;x++){
        printf("long float: \n %.4lf \n,",d[x]);
    }


    return 0;
}