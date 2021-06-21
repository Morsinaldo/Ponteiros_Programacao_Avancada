#include <stdio.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int vet[] = {4,9,13};
    int i;

    for(i=0;i<3;i++){
        printf("%d ",*(vet+i)); // imprime o respectivo conteúdo da posição inicial do vetor vet incrementado em i posições
        // Saída: 4 9 13
    }

    for(i=0;i<3;i++){
        printf("%X ", vet+i); // imprime em hexadecimal o respectivo endereço do vetor vet partindo do endereço incial incrementado em i posições
        // Saída: 61FE10 61FE14 61FE18
    }

    return 0;
}
