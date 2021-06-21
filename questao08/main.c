#include <stdio.h>

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int vet[] = {4,9,13};
    int i;

    for(i=0;i<3;i++){
        printf("%d ",*(vet+i)); // imprime o respectivo conte�do da posi��o inicial do vetor vet incrementado em i posi��es
        // Sa�da: 4 9 13
    }

    for(i=0;i<3;i++){
        printf("%X ", vet+i); // imprime em hexadecimal o respectivo endere�o do vetor vet partindo do endere�o incial incrementado em i posi��es
        // Sa�da: 61FE10 61FE14 61FE18
    }

    return 0;
}
