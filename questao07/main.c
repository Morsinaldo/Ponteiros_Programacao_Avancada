#include <stdio.h>

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int mat[4], *p, x;

    p = mat + 1; // V�lida, pois p recebe o endere�o 0 de mat somado 1, isto �, mat[1]
    //p = mat++; // Inv�lida, pois est� tentado fazer um incremeto diretamente no valor do endere�o.
    //p = ++mat; // Inv�lida, pela mesma raz�o do caso anterior
    x = (*mat)++; // V�lida, pois x recebe o conte�do do primeiro elemento do vetor mat incrementado 1

    return 0;
}
