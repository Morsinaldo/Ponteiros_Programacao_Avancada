#include <stdio.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    float aloha[10], coisas[10][5], *pf, value = 2.2;
      int i=3;
      aloha[2] = value; // Válido, aloha[2] recebe o valor 2.2
      scanf("%f", &aloha); // Válido, irá ler um valor do tipo float e armazenar no primeiro endereço de aloha, isto é, aloha[0]
      //aloha = value; // Inválido, pois não é possível guardar o valor de uma variável em um vetor sem informar a posição do vetor
      printf("%f", aloha); // Válido, imprime o valor 0.000, uma vez que não foi indicada a posição do vetor na hora a ser impressa
      coisas[4][4] = aloha[3]; // Válido, o elemento na linha 4 e coluna 4 da matriz coisas irá receber o conteúdo de aloha[3]
      //coisas[5] = aloha; // Inválido, pois não é possível armazenar um vetor em uma linha de matriz
      //pf = value; // Inválido, pois como é um valor do tipo float, é preciso colocar um & na frente para receber o endereço dessa variável, ou um * para receber seu conteúdo
      pf = aloha; // Válido, pois como é um vetor, não é preciso colocar o & na frente. pf irá receber o endereço do primeiro elemento do vetor aloha

    return 0;
}
