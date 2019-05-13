/*
Leonardo H. Zeaim
*/
/*
 Exercicio 1
 Rescrever o código do slide 8 da Aula 01 para atender
 todos os tipos do slide 7. Observe que para visualizar
 os limites dos tipos float e double utilize a
 biblioteca <float.h>;
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    char c;
    int i;
    double d;
    float f;
    short s;

    /*
     * Impressao do tamanho e limites do tipo char
     */
    printf("Tamanho do Char \"c\"=%d \n"
           "Tamanho do tipo \"Char\"=%d\n"
           ,sizeof(c),sizeof(char));
    printf("Valores limites para \"char\" de %d ate %d\n\n"
    ,CHAR_MIN,CHAR_MAX);


    /*
     * Impressao do tamanho e limites do tipo int
    */
    printf("Tamanho do Int \"i\"=%d \n"
           "Tamanho do tipo \"Int\"=%d\n"
            ,sizeof(i),sizeof(int));
    printf("Valores limites para \"Int\" de %d ate %d\n\n"
            ,INT_MIN,INT_MAX);


    /*
     * Impressao do tamanho e limites do tipo double
    */
    printf("Tamanho do Double \"d\"=%d \n"
           "Tamanho do tipo \"Double\"=%d \n"
            ,sizeof(d),sizeof(double));
    printf("Valores limites para \"Double\" de %d ate %d \n\n"
            ,DBL_MIN,DBL_MAX);


    /*
     * Impressao do tamanho e limites do tipo float
    */
    printf("Tamanho do Float \"f\"=%d \n"
           "Tamanho do tipo \"Float\"=%d \n"
            ,sizeof(f),sizeof(float));
    printf("Valores limites para \"Float\" de %d ate %d \n\n"
            ,FLT_MIN,FLT_MAX);


    /*
     * Impressao do tamanho e limites do tipo short
    */
    printf("Tamanho do Short \"s\"=%d \n"
           "Tamanho do tipo \"Short\"=%d\n"
            ,sizeof(s),sizeof(short));
    printf("Valores limites para \"Short\" de %d ate %d \n\n"
            ,SHRT_MIN,SHRT_MAX);


    return 0;
}
