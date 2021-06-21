#include <stdio.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int valor, idade, vetor[3];
    int *p1, *p4, *p5;
    float temp;
    float *p2;
    char aux;
    char *p3, *nome = "Ponteiros";

    // A
    valor = 10;
    p1 = &valor; // p1 recebe o endereço de valor
    *p1 = 20; // O conteúdo do endereço de p1 é alterado para 20
    printf("%d \n", valor); // Saída: 20

    // B
    temp = 26.5;
    p2 = &temp; // p2 recebe o endereço temp
    *p2 = 29.0; // o conteúdo do endereço de p2 é alterado para 29.0
    printf("%.1f \n", temp); // Saída: 29.0

    // C
    p3 = &nome[0]; // p3 recebe o endereço de nome[0], isto é, a caractere 'P'
    aux = *p3; // aux recebe o conteúdo de p3
    printf("%c \n", aux); // Saída: 'P'

    // D
    p3 = &nome[4]; // p3 recebe o endereço de nome[4], isto é, o caractere 'e'
    aux = *p3; // aux recebe o conteúdo de p3
    printf("%c \n", aux); // Saída: 'e'

    // E
    p3 = nome; // p3 recebe nome, sendo equialente ao primeiro endereço do vetor nome, isto é, o caractere 'P'
    printf("%c \n", *p3); //Saída: 'P'

    // F
    p3 = p3 + 4; // incrementa o endereço de p3 em 4 posiçoes, fazendo com que p3 aponte para a caractere 'e'
    printf("%c \n", *p3); //Saída: 'e'

    // G
    p3--; // Decremnta-se 1 ao endereço de p3, fazendo com que ele passe a apontar para nome[3], isto é, o caractere 't'
    printf("%c \n", *p3); //Saída: 't'

    // H
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor; // p4 recebe vetor, sendo equivalente ao primeiro endereço de vetor, isto é, o número 31;
    idade = *p4; // idade recebe o conteúdo do ponteiro p4
    printf("%d \n", idade); // Saída: 31

    // I
    p5 = p4 + 1; // p5 recebe o endereço de p4 incrementado 1, isto é, vetor[1]
    idade = *p5; // idade recebe o conteudo de p5, isto é, vetor[1] = 45
    printf("%d \n", idade); // Saìda: 45

    // J
    p4 = p5 + 1; // p4 recebe o endereço de p5 + 1, isto é, vetor[2]
    idade = *p4; // idade recebe o conteúdo de p4, isto é, vetor[2] = 27
    printf("%d \n", idade); // Saída: 27

    // L
    p4 = p4 - 2; // decrementa-se 2 ao endereço de p4 e, com isso, ele volta a apontar para vetor[0]
    idade = *p4;
    printf("%d \n", idade); // Saída: 31

    // M
    p5 = &vetor[2] - 1; // p5 recebe o endereço de vetor 2 menos 1, isto é, vetor[1]
    printf("%d \n", *p5); // Saída: 45

    // N
    p5++; // incrementa-se 1 ao endereço de -5, fazendo ele apontar para vetor[2]
    printf("%d \n", *p5); // Saída: 27


    return 0;
}
