#include <stdio.h>

int main(){

    // & - retorna o ENDEREÇO da variável
    // * - retorna o CONTEÚDO da variável

    int i = 5;
    int *p;
    p = &i; // p recebe o endereço de i

    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    // Saída de p: 4094 (Nesse caso, ele imprime o endereço em hexadecimal)
    // Saída de *p+2: 7 (Conteúdo do ponteiro p + 2 = 5 + 2 = 7)
    // Saída de **&p: 5 (Conteúdo de conteúdo de p)
    // Saída de 3**p: 15 (3 vezes o conteúdo do ponteiro p = 3*5 = 15)
    // Saída de **&p+4: 9 (Conteúdo do conteúdo do ponteiro p + 4 = 5 + 4 = 9)

    // Com isso, será impresso, respectivamente: 0xFFE 7 5 15 9

    return 0;
}
