#include <stdio.h>

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    float aloha[10], coisas[10][5], *pf, value = 2.2;
      int i=3;
      aloha[2] = value; // V�lido, aloha[2] recebe o valor 2.2
      scanf("%f", &aloha); // V�lido, ir� ler um valor do tipo float e armazenar no primeiro endere�o de aloha, isto �, aloha[0]
      //aloha = value; // Inv�lido, pois n�o � poss�vel guardar o valor de uma vari�vel em um vetor sem informar a posi��o do vetor
      printf("%f", aloha); // V�lido, imprime o valor 0.000, uma vez que n�o foi indicada a posi��o do vetor na hora a ser impressa
      coisas[4][4] = aloha[3]; // V�lido, o elemento na linha 4 e coluna 4 da matriz coisas ir� receber o conte�do de aloha[3]
      //coisas[5] = aloha; // Inv�lido, pois n�o � poss�vel armazenar um vetor em uma linha de matriz
      //pf = value; // Inv�lido, pois como � um valor do tipo float, � preciso colocar um & na frente para receber o endere�o dessa vari�vel, ou um * para receber seu conte�do
      pf = aloha; // V�lido, pois como � um vetor, n�o � preciso colocar o & na frente. pf ir� receber o endere�o do primeiro elemento do vetor aloha

    return 0;
}
