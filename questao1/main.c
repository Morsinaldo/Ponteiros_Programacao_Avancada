#include <stdio.h>

int main(){

    // & - retorna o ENDERE�O da vari�vel
    // * - retorna o CONTE�DO da vari�vel

    int i = 3, j = 5;
    int *p, *q;
    p = &i; // p recebe o endere�o de i
    q = &j; // q recebe o endere�o de j

    printf("%d \n", p == &i); // Sa�da: 1 (compara��o entre o endere�o de p e i)
    printf("%d \n", *p - *q); // Sa�da: -2 (conte�do de p - conte�do de q = 3 - 5 = -2)
    printf("%d \n", **&p); // Sa�da: 3 (retorna o conte�do do conte�do do ponteiro p, que nesse caso � o pr�prio conteudo do ponteiro p, 3)
    printf("%d \n", 3 - *p/(*q) + 7); // Sa�da: 10 (3 - (3/5) + 7 = 3 - 0 + 7 = 10)

    return 0;
}
