#include <stdio.h>

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int pulo[] = {0,1,2,3,4};

    printf("%d\n",*(pulo+2)); // imprime o conte�do armazenado na terceira posi��o
    printf("%d\n",*(pulo+4)); // imprime o conte�do armazenado na quinta posi��o
    printf("%d\n",(pulo+4)); // imprime o endere�o da quinta posi��o
    printf("%d\n",(pulo+2)); // imprime o endere�o da terceira posi��o

    /* Portanto, as express�es que referenciam o terceiro elemento do vetor s�o:
        *(pulo+2);
        pulo + 2;
    */

    return 0;
}
