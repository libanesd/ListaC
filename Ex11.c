/*
 Leonardo H. Zeaim
*/
/*
 Exercicio 11
 Crie um programa que
    1. use recursividade para calcular 100 números da
    série de Fibonacci;
    2. armazene estes 100 números em uma matriz 10x10;
    3. Salve esta matriz em um arquivo “matriz.txt”.
 */


#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x){
    if(x==0||x==1){
        return 1;
    }
    else
        return fibonacci(x-1) - fibonacci(x-2);
}

int main() {
    FILE *arquivo;
    int cont1,cont2, x=0;
    int m[10][10];

    arquivo = fopen("matriz.txt", "wt");
    printf("Sequencia FIBONACCI!\n");

    for(cont1=0;cont1<10;cont1++){
        for(cont2=0;cont2<10;cont2++){
            m[cont1][cont2]=fibonacci(x+1);
            x++;
        }
    }

    for(cont1=0;cont1<10;cont1++){
        for(cont2=0;cont2<10;cont2++){
            fprintf(arquivo,"%d\n",m[cont1][cont2]);
        }
    }
    if(arquivo != NULL){
        printf("Arquivo gravado com sucesso");
    }
    else{
        printf("Error");
    }


    return 0;
}
