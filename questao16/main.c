#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* --------------- QUESTÃO 13 COM TEMPO DE EXECUÇÃO --------------------

// Assinatura das funções
void trocaNumero(float *a, float *b);

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int n;
    float *v;
    clock_t tInicial, tFinal;

    printf("Digite quantos números serão informados: ");
    scanf("%d", &n);

    // Preenchendo o array de alocação dinâmica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    tInicial = clock(); // Tempo imediatamente antes da ordenação dos números

    // Ordenando os números em ordem crescente
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j]){
                trocaNumero(&v[i],&v[j]);
            }
        }
    }

    tFinal = clock(); // Tempo imediatamente após o término da ordenação dos números

    // Imprimindo os números
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    double tExecucao = (double)((tFinal - tInicial)/CLOCKS_PER_SEC);
    printf("\nTempo de execucao: %lf", tExecucao);
    free(v); // Liberação da memória alocada

    return 0;
}

// ---------- FUNÇÕES DA Q13 -----------
// Função para trocar os valores das variáveis
void trocaNumero(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
*/

/* ------------------------ QUESTÃO 14 COM TEMPO DE EXECUÇÃO ----------------------

// Assinatura das funções
int comparacao (const void *a, const void *b);

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int n;
    float *v;
    clock_t tInicial, tFinal;

    printf("Digite 8quantos números serão informados: ");
    scanf("%d", &n);

    // Preenchendo o array de alocação de memória dinâmica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    tInicial = clock(); // Tempo imediatamente antes da ordenação dos números

    qsort(v, n, sizeof(float), comparacao);

    tFinal = clock(); // Tempo imediatamente após o término da ordenação dos números

        // Imprimindo os números
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    double tExecucao = (double)((tFinal - tInicial)/CLOCKS_PER_SEC);
    printf("\nTempo de execucao: %lf", tExecucao);

    free(v); // Liberação da memória alocada
    return 0;
}

// ---------- FUNÇÕES DA 14 -----------
int comparacao (const void *a, const void *b){
    if(*(float*)a < *(float*)b){
    return -1;
  }else if(*(float*)a > *(float*)b){
    return 1;
  }else{
    return 0;
  }
}
*/

