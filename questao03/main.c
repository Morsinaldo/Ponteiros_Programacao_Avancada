#include <stdio.h>

int main(){

    // & - retorna o ENDERE�O da vari�vel
    // * - retorna o CONTE�DO da vari�vel

    int i = 3, j = 2;
    int *p, *q;

    p = i; // LEGAL, p recebe o conte�do de i
    q = &j; // LEGAL, q recebe o endere�o de j
    p = &*&i; // LEGAL, p recebe o endere�o do conte�do do endere�o de i
    //i = (*&)j; // ILEGAL, pois o par�nteses tem prioridade na execu��o e, com isso, o compilador n�o reconhece (*&) como uma express�o v�lida, uma vez que n�o est� associada a nenhuma vari�vel.
    i = *&j; // LEGAL, i recebe o conte�do do endere�o de j
    i = *&*&j; // LEGAL, i recebe o conte�do do endere�o do conte�do do endere�o de j. Ou seja, recebe o conte�do armazenado no endere�o de j
    q = *p; // LEGAL, q recebe o conte�do do ponteiro p
    i = (*p)++ + *q; // LEGAL, faz um incremento unit�rio no conte�do de p e depois soma com o conte�do de q


    return 0;
}
