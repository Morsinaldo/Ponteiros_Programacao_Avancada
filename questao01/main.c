#include <stdio.h>

int main(){

    // & - retorna o ENDEREÇO da variável
    // * - retorna o CONTEÚDO da variável

    int i = 3, j = 5;
    int *p, *q;
    p = &i; // p recebe o endereço de i
    q = &j; // q recebe o endereço de j

    printf("%d \n", p == &i); // Saída: 1 (comparação entre o endereço de p e i)
    printf("%d \n", *p - *q); // Saída: -2 (conteúdo de p - conteúdo de q = 3 - 5 = -2)
    printf("%d \n", **&p); // Saída: 3 (retorna o conteúdo do conteúdo do ponteiro p, que nesse caso é o próprio conteudo do ponteiro p, 3)
    printf("%d \n", 3 - *p/(*q) + 7); // Saída: 10 (3 - (3/5) + 7 = 3 - 0 + 7 = 10)

    return 0;
}
