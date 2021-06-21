#include <stdio.h>
#include <stdlib.h>

// Assinaturas das funções
int comparacao(float a, float b);
void trocaNumero(float *a, float *b);
void myQsort(float *v, int n, int(*comparacao)(float, float));

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int n;
    scanf("%d", &n);
    float *v = malloc(n*sizeof(float)); // alocando o ponteiro vetor de alocação de memória dinâmica

    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]); // preenchendo o vetor
    }

    myQsort(v, n, comparacao); // chamando a minha função qsort
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]); // imprimindo o vetor após a ordenação
    }

    free(v); // liberando a alocação dinâmica de memória do ponteiro vetor
    return 0;
}

/* função para comparar os dois valores informados
    1 - o primeiro número é maior que o segundo
    -1 - o primeiro número é menor que o segundo
    0 - os dois números são iguais

    É possível utilizar essa função de comparação para implementar uma função de escolha
    entre ordem direta ou ordem inversa, caso seja necessário.
*/

int comparacao(float a, float b){
    if(a > b){
        return 1;
    } else if(a < b){
        return -1;
    } else {
        return 0;
    }
}

// Função para trocar os números
void trocaNumero(float *a, float *b){
    float aux = *a;
    *a = *b;
    *b = aux;
}

// Minha função qsort
void myQsort(float *v, int n, int(*comparacao)(float, float)){ // (ponteiro para o vetor, tamanho do vetor, ponteiro para a função de comparação)
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(comparacao(v[i],v[j]) == 1){
                trocaNumero(&v[i],&v[j]);
            }
        }
    }
}
