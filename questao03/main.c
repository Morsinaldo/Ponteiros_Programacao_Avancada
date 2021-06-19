#include <stdio.h>

int main(){

    // & - retorna o ENDEREÇO da variável
    // * - retorna o CONTEÚDO da variável

    int i = 3, j = 2;
    int *p, *q;

    p = i; // LEGAL, p recebe o conteúdo de i
    q = &j; // LEGAL, q recebe o endereço de j
    p = &*&i; // LEGAL, p recebe o endereço do conteúdo do endereço de i
    //i = (*&)j; // ILEGAL, pois o parênteses tem prioridade na execução e, com isso, o compilador não reconhece (*&) como uma expressão válida, uma vez que não está associada a nenhuma variável.
    i = *&j; // LEGAL, i recebe o conteúdo do endereço de j
    i = *&*&j; // LEGAL, i recebe o conteúdo do endereço do conteúdo do endereço de j. Ou seja, recebe o conteúdo armazenado no endereço de j
    q = *p; // LEGAL, q recebe o conteúdo do ponteiro p
    i = (*p)++ + *q; // LEGAL, faz um incremento unitário no conteúdo de p e depois soma com o conteúdo de q


    return 0;
}
