/*
 Exercicio 2
 Tentar uma violação de memória no Linux e/ou Windows:
 declare um ponteiro qualquer (int* p) e atribua a ele
 o valor 23 (p = 23). Depois tente ler o conteúdo na
 posição referenciada pelo ponteiro (printf(“%d”, *p));
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;
    p=23;
    printf("%d.\n", *p);

    return 0;
}