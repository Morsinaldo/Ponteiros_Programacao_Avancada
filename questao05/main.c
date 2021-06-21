#include <stdio.h>

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet; // f recebe o endere�o de vet, isto �, do primeiro elemento do vetor vet

    printf("contador/valor/valor/endereco/endereco");

    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d ",i); // imprime valor do contador i
        printf("vet[%d] = %.1f ",i, vet[i]); // imprime o conte�do da posi��o i do vetor
        printf("*(f + %d) = %.1f ",i, *(f+i));  // imprime o conte�do armazenado no endere�o da posi��o inicial do ponteiro f somado i posi��es
        printf("&vet[%d] = %X ",i, &vet[i]); // imprime o endere�o da posi��o i do vetor, por isso coloca-se o & ma hora de fazer a impress�o
        printf("(f + %d) = %X ",i, f+i); // imprime o endere�o da posi��o inicial do ponteiro somado i posi��es.
    }

    /*  Sa�da do programa quando foi executado:

    contador/valor/valor/endereco/endereco
    i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 61FDF0 (f + 0) = 61FDF0
    i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 61FDF4 (f + 1) = 61FDF4
    i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 61FDF8 (f + 2) = 61FDF8
    i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 61FDFC (f + 3) = 61FDFC
    i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 61FE00 (f + 4) = 61FE00

    */

    return 0;
}
