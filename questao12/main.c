#include <stdio.h>
#include <stdlib.h>

// De acordo com o blog geekforgeeks, um ponteiro para função é um tipo de variável que diferente dos ponteiros normais, ele aponta para o código e não para dados.
// Por isso, podemos executar uma função sem precisar necessariamente chamá-la explicitamente.

// Assinaturas das funções
void soma(float a, float b);
void sub(float a, float b);
void multi(float a, float b);
void divi(float a, float b);

int main()
{
    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    // Array que aponta para as funções declaradas anteriormente
    void (*pFuncoes[])(float, float) = {soma, sub, multi, divi};
    int op = 1;
    float a,b;

    // O programa irá se repetir até o usuário digitar a opção de sair
    while(op != 4){
        printf("Informe o número da operação correspondente: \n 0 - Soma \n 1 - Subtração \n 2 - Multiplicação \n 3 - Divisão \n 4 - Sair \n");
        scanf("%d", &op);

        if(op == 4){
            break;
        } else if (op < 0 || op > 4){
            while(op < 0 || op > 4){
                printf("Opçãp inválida. Por favor, digite uma opção válida: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n 0 - Sair \n");
                scanf("%d", &op);
            }
        }

        printf("Informe o primeiro número ");
        scanf("%f", &a);
        printf("Informe o segundo número ");
        scanf("%f", &b);
        (*pFuncoes[op])(a,b); // chama a função correspondente a operação selecionada por meio do array de ponteiro para as funções

    }

    return 0;
}

// Funções que irão ser apontadas
void soma(float a, float b){
    printf("Resultado da soma: %f \n", a+b);
}

void sub(float a, float b){
    printf("Resultado da subtração: %f \n", a-b);
}

void multi(float a, float b){
    printf("Resultado da multiplicação: %f \n", a*b);
}

void divi(float a, float b){
    printf("Resultado da divisão: %f \n", a/b);
}
