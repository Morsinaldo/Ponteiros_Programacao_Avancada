#include <stdio.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int pulo[] = {0,1,2,3,4};

    printf("%d\n",*(pulo+2)); // imprime o conteúdo armazenado na terceira posição
    printf("%d\n",*(pulo+4)); // imprime o conteúdo armazenado na quinta posição
    printf("%d\n",(pulo+4)); // imprime o endereço da quinta posição
    printf("%d\n",(pulo+2)); // imprime o endereço da terceira posição

    /* Portanto, as expressões que referenciam o terceiro elemento do vetor são:
        *(pulo+2);
        pulo + 2;
    */

    return 0;
}
