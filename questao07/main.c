#include <stdio.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int mat[4], *p, x;

    p = mat + 1; // Válida, pois p recebe o endereço 0 de mat somado 1, isto é, mat[1]
    //p = mat++; // Inválida, pois está tentado fazer um incremeto diretamente no valor do endereço.
    //p = ++mat; // Inválida, pela mesma razão do caso anterior
    x = (*mat)++; // Válida, pois x recebe o conteúdo do primeiro elemento do vetor mat incrementado 1

    return 0;
}
