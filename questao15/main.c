#include <stdio.h>
#include <stdlib.h>

// Assinaturas das fun��es
int comparacao(float a, float b);
void trocaNumero(float *a, float *b);
void myQsort(float *v, int n, int(*comparacao)(float, float));

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int n;
    scanf("%d", &n);
    float *v = malloc(n*sizeof(float)); // alocando o ponteiro vetor de aloca��o de mem�ria din�mica

    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]); // preenchendo o vetor
    }

    myQsort(v, n, comparacao); // chamando a minha fun��o qsort
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]); // imprimindo o vetor ap�s a ordena��o
    }

    free(v); // liberando a aloca��o din�mica de mem�ria do ponteiro vetor
    return 0;
}

/* fun��o para comparar os dois valores informados
    1 - o primeiro n�mero � maior que o segundo
    -1 - o primeiro n�mero � menor que o segundo
    0 - os dois n�meros s�o iguais

    � poss�vel utilizar essa fun��o de compara��o para implementar uma fun��o de escolha
    entre ordem direta ou ordem inversa, caso seja necess�rio.
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

// Fun��o para trocar os n�meros
void trocaNumero(float *a, float *b){
    float aux = *a;
    *a = *b;
    *b = aux;
}

// Minha fun��o qsort
void myQsort(float *v, int n, int(*comparacao)(float, float)){ // (ponteiro para o vetor, tamanho do vetor, ponteiro para a fun��o de compara��o)
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(comparacao(v[i],v[j]) == 1){
                trocaNumero(&v[i],&v[j]);
            }
        }
    }
}
