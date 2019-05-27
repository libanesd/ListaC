
/*
 Leonardo H. Zeaim
 */
/*
 Crie um vetor de 1000 inteiros e preencha-o com valores
 aleatórios. Em seguida, usando aritmética de ponteiros,
 percorra todos os valores, somando-os e, ao final,
 exiba o total na tela. Exibir, também, o maior e o menor
 elemento contido no vetor.
  */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int v[1000], resultado=0, maior=0, menor=1000,i;
    int* p = &v[0];

    for(i=0;i<1000;i++){
        p[i]=rand()%1000;
        printf("%d,",p[i]);
        if(p[i]>maior){
            maior = p[i];
        }
        if(p[i]<menor){
            menor = p[i];
        }
    }
    for(i=0;i<1000;i++){
        resultado += *p;
        p++;
    }
    printf("\n");
    printf("Soma: %d \n",resultado);
    printf("Menor valor: %d \n",menor);
    printf("Maior valor: %d \n",maior);

    return 0;
}
