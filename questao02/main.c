#include <stdio.h>

int main(){

    // & - retorna o ENDERE�O da vari�vel
    // * - retorna o CONTE�DO da vari�vel

    int i = 5;
    int *p;
    p = &i; // p recebe o endere�o de i

    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    // Sa�da de p: 4094 (Nesse caso, ele imprime o endere�o em hexadecimal)
    // Sa�da de *p+2: 7 (Conte�do do ponteiro p + 2 = 5 + 2 = 7)
    // Sa�da de **&p: 5 (Conte�do de conte�do de p)
    // Sa�da de 3**p: 15 (3 vezes o conte�do do ponteiro p = 3*5 = 15)
    // Sa�da de **&p+4: 9 (Conte�do do conte�do do ponteiro p + 4 = 5 + 4 = 9)

    // Com isso, ser� impresso, respectivamente: 0xFFE 7 5 15 9

    return 0;
}
