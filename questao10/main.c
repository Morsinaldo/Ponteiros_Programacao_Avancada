#include <stdio.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    char xc[4]; // o tipo char ocupa 1 byte
    printf(" ----------- ENDEREÇOS DO TIPO CHAR ------------- \n");
    printf("%d\n", xc); // x[0]
    printf("%d\n", xc+1); // x[1]
    printf("%d\n", xc+2); // x[2]
    printf("%d\n", xc+3); // x[3]

    int xi[4]; // o tipo int ocupa 4 bytes
    printf("\n ----------- ENDEREÇOS DO TIPO INT ------------- \n");
    printf("%d\n", xi); // x[0]
    printf("%d\n", xi+1); // x[1]
    printf("%d\n", xi+2); // x[2]
    printf("%d\n", xi+3); // x[3]


    float xf[4]; // o tipo float ocupa 4 bytes
    printf("\n ----------- ENDEREÇOS DO TIPO FLOAT ------------- \n");
    printf("%d\n", xf); // x[0]
    printf("%d\n", xf+1); // x[1]
    printf("%d\n", xf+2); // x[2]
    printf("%d\n", xf+3); // x[3]

    double xd[4]; // o tipo int ocupa 8 bytes
    printf("\n ----------- ENDEREÇOS DO TIPO DOUBLE ------------- \n");
    printf("%d\n", xd); // x[0]
    printf("%d\n", xd+1); // x[1]
    printf("%d\n", xd+2); // x[2]
    printf("%d\n", xd+3); // x[3]

    return 0;
}

/* Saída do programa quando foi executado, mostrando que cada tipo varia a quantidade de bytes prevista na questão anterior
 ----------- ENDEREÃOS DO TIPO CHAR -------------
6422044
6422045
6422046
6422047

 ----------- ENDEREÃOS DO TIPO INT -------------
6422016
6422020
6422024
6422028

 ----------- ENDEREÃOS DO TIPO FLOAT -------------
6422000
6422004
6422008
6422012

 ----------- ENDEREÃOS DO TIPO DOUBLE -------------
6421968
6421976
6421984
6421992
*/
