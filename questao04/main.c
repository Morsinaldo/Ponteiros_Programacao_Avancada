#include <stdio.h>

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int valor, idade, vetor[3];
    int *p1, *p4, *p5;
    float temp;
    float *p2;
    char aux;
    char *p3, *nome = "Ponteiros";

    // A
    valor = 10;
    p1 = &valor; // p1 recebe o endere�o de valor
    *p1 = 20; // O conte�do do endere�o de p1 � alterado para 20
    printf("%d \n", valor); // Sa�da: 20

    // B
    temp = 26.5;
    p2 = &temp; // p2 recebe o endere�o temp
    *p2 = 29.0; // o conte�do do endere�o de p2 � alterado para 29.0
    printf("%.1f \n", temp); // Sa�da: 29.0

    // C
    p3 = &nome[0]; // p3 recebe o endere�o de nome[0], isto �, a caractere 'P'
    aux = *p3; // aux recebe o conte�do de p3
    printf("%c \n", aux); // Sa�da: 'P'

    // D
    p3 = &nome[4]; // p3 recebe o endere�o de nome[4], isto �, o caractere 'e'
    aux = *p3; // aux recebe o conte�do de p3
    printf("%c \n", aux); // Sa�da: 'e'

    // E
    p3 = nome; // p3 recebe nome, sendo equialente ao primeiro endere�o do vetor nome, isto �, o caractere 'P'
    printf("%c \n", *p3); //Sa�da: 'P'

    // F
    p3 = p3 + 4; // incrementa o endere�o de p3 em 4 posi�oes, fazendo com que p3 aponte para a caractere 'e'
    printf("%c \n", *p3); //Sa�da: 'e'

    // G
    p3--; // Decremnta-se 1 ao endere�o de p3, fazendo com que ele passe a apontar para nome[3], isto �, o caractere 't'
    printf("%c \n", *p3); //Sa�da: 't'

    // H
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor; // p4 recebe vetor, sendo equivalente ao primeiro endere�o de vetor, isto �, o n�mero 31;
    idade = *p4; // idade recebe o conte�do do ponteiro p4
    printf("%d \n", idade); // Sa�da: 31

    // I
    p5 = p4 + 1; // p5 recebe o endere�o de p4 incrementado 1, isto �, vetor[1]
    idade = *p5; // idade recebe o conteudo de p5, isto �, vetor[1] = 45
    printf("%d \n", idade); // Sa�da: 45

    // J
    p4 = p5 + 1; // p4 recebe o endere�o de p5 + 1, isto �, vetor[2]
    idade = *p4; // idade recebe o conte�do de p4, isto �, vetor[2] = 27
    printf("%d \n", idade); // Sa�da: 27

    // L
    p4 = p4 - 2; // decrementa-se 2 ao endere�o de p4 e, com isso, ele volta a apontar para vetor[0]
    idade = *p4;
    printf("%d \n", idade); // Sa�da: 31

    // M
    p5 = &vetor[2] - 1; // p5 recebe o endere�o de vetor 2 menos 1, isto �, vetor[1]
    printf("%d \n", *p5); // Sa�da: 45

    // N
    p5++; // incrementa-se 1 ao endere�o de -5, fazendo ele apontar para vetor[2]
    printf("%d \n", *p5); // Sa�da: 27


    return 0;
}
