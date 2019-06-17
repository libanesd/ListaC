/*
 Leonardo H. Zeaim
*/
/*
 Exercicio 11
 Crie um programa que
  1. leia o arquivo salvo na questão anterior;
  2. armazene os números lidos em uma matriz 10x10;
  3. multiplique todos os números na matriz por 32;
  4. salve a nova matriz calculada em um novo arquivo “matriz_x32.txt”.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    int i,x, y=0;
    int m[5][5];

    arq = fopen("matriz_32.txt", "wt");
    for(i=0;i<5;i++){
        for(x=0;x<5;x++){
            fscanf(matriz, “%d”, m[i][x] )
        }
    }
    for(i=0;i<5;i++){
        for(x=0;x<5;x++){
            m[i][x]=m[i][x]*32;
        }
    }

    for(i=0;i<5;i++){
        for(x=0;x<5;x++){
            fprintf(arq,"%d,",m[i][x]);
        }
    }
    if(arq != NULL)
        printf("\n Arquivo gravado com sucesso");
    else
        printf("\n Erro ao gravar arquivo");

    return 0;
}
