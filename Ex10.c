/*
 Leonardo H. Zeaim
 */
/*
 Crie uma função que copiarMatriz3por3, que copia
 matriz int mOrigem[3][3] para matriz int mDestino[3][3].
 Use passagem de parâmetros (as matrizes mOrigem e
 mDestino) por referência. Crie uma programa que faça a
 cópia e exiba o resultado em tela.
 */

#include <stdio.h>
#include <stdlib.h>

int copiarMatriz3por3(int* x, int* y){
    int i;
    for(i=0;i<9;i++){
        y[i]=x[i];
    }
}

int main(void) {
    int mOrigem[3][3] = {{1,2,3},{3,1,2},{2,3,1}};
    int mDestino[3][3];
    int cont1,cont2;
    copiarMatriz3por3(&mOrigem,&mDestino);

    for(cont1=0;cont1<3;cont1++){
        for(cont2=0;cont2<3;cont2++){
            printf("%d,",mDestino[cont1][cont2]);
        }
        printf("\n");
    }

    return 0;
}
