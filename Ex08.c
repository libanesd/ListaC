/*
 Leonardo H. Zeaim
 */
/*
 Crie quatro funções, somarDoisNumeros,
 subtrairDoisNumeros, dividirDoisNumeros,
 multiplicarDoisNumeros, usando passagem
 de parâmetros por valor. Crie um programa
 que utilize todas as funções e mostre o
 resultado em tela.
 */

#include <stdio.h>
#include <stdlib.h>

int somarDoisNumeros(int x, int y){
    printf("%d + %d = %d\n",x,y,x+y);
}
int substiruirDoisNumeros(int x,int y){
    printf("%d - %d = %d\n",x,y,x-y);
}
int dividirDoisNumeros(int x,int y){
    printf("%d / %d = %d\n",x,y,x/y);
}
int multiplicarDoisNumeros(int x,int y){
    printf("%d x %d = %d\n",x,y,x*y);
}

int main(void) {
    int a,b;

    printf("digite dois numeros\n");
    scanf("%d %d",&a,&b);

    somarDoisNumeros(a,b);
    substiruirDoisNumeros(a,b);
    dividirDoisNumeros(a,b);
    multiplicarDoisNumeros(a,b);



    return 0;
}
