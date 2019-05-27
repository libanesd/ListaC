/*
 Leonardo H. Zeaim
 */
/*
 Crie um vetor de char (String) com a frase
 “O rato roeu a roupa do rei de roma”. Use um ponteiro
 *c para percorrer a strings de trás para frente e
 exibir a frase invertida.
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[34]={"O rato roeu a roupa do rei de roma\n"};
    int i;
    char *c=&s[33];

    printf("%s \n",s);
    for(i=33;i>0;i--){
        printf("%c",s[i]);
    }

    return 0;
}
