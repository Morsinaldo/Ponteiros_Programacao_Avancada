#include <stdio.h>
#include <stdlib.h>

// De acordo com o blog geekforgeeks, um ponteiro para fun��o � um tipo de vari�vel que diferente dos ponteiros normais, ele aponta para o c�digo e n�o para dados.
// Por isso, podemos executar uma fun��o sem precisar necessariamente cham�-la explicitamente.

// Assinaturas das fun��es
void soma(float a, float b);
void sub(float a, float b);
void multi(float a, float b);
void divi(float a, float b);

int main()
{
    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    // Array que aponta para as fun��es declaradas anteriormente
    void (*pFuncoes[])(float, float) = {soma, sub, multi, divi};
    int op = 1;
    float a,b;

    // O programa ir� se repetir at� o usu�rio digitar a op��o de sair
    while(op != 4){
        printf("Informe o n�mero da opera��o correspondente: \n 0 - Soma \n 1 - Subtra��o \n 2 - Multiplica��o \n 3 - Divis�o \n 4 - Sair \n");
        scanf("%d", &op);

        if(op == 4){
            break;
        } else if (op < 0 || op > 4){
            while(op < 0 || op > 4){
                printf("Op��p inv�lida. Por favor, digite uma op��o v�lida: \n 1 - Soma \n 2 - Subtra��o \n 3 - Multiplica��o \n 4 - Divis�o \n 0 - Sair \n");
                scanf("%d", &op);
            }
        }

        printf("Informe o primeiro n�mero ");
        scanf("%f", &a);
        printf("Informe o segundo n�mero ");
        scanf("%f", &b);
        (*pFuncoes[op])(a,b); // chama a fun��o correspondente a opera��o selecionada por meio do array de ponteiro para as fun��es

    }

    return 0;
}

// Fun��es que ir�o ser apontadas
void soma(float a, float b){
    printf("Resultado da soma: %f \n", a+b);
}

void sub(float a, float b){
    printf("Resultado da subtra��o: %f \n", a-b);
}

void multi(float a, float b){
    printf("Resultado da multiplica��o: %f \n", a*b);
}

void divi(float a, float b){
    printf("Resultado da divis�o: %f \n", a/b);
}
