 /*
Leonardo H. Zeaim
*/
/*
 Exercicio 5
 Crie duas matrizes de 100x100 (números inteiros), Matriz A e matriz B. Preencha todos
 os valores da matriz A com dados aleatórios. Usando aritmética de ponteiros percorra
 a matriz A copiando cada elemento para a matriz B (com outro ponteiro) em ordem
 inversa. Finalmente, exiba os dados da matriz A e da matriz B (valores em ordem
 inversa), na tela.
 */



#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a[100][100],b[100][100],x,i=999;

	int* pa = &a[0][0];
	int* pb = &b[0][0];

	for(x=0;x<1000;x++){
        pa[x]=rand()%100;
    }
    for(x=0;x<1000;x++){
        pb[x]=pa[i];
        i--;
    }

    for(x=0;x<1000;x++){
        printf("%d,", pa[x]);
    }
    printf("\n");
    for(x=0;x<1000;x++){
        printf("%d,", pb[x]);
    }


	return 0;
}

