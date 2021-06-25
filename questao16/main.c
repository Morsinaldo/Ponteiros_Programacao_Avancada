#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* --------------- QUEST�O 13 COM TEMPO DE EXECU��O --------------------

// Assinatura das fun��es
void trocaNumero(float *a, float *b);

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int n;
    float *v;
    clock_t tInicial, tFinal;

    printf("Digite quantos n�meros ser�o informados: ");
    scanf("%d", &n);

    // Preenchendo o array de aloca��o din�mica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    tInicial = clock(); // Tempo imediatamente antes da ordena��o dos n�meros

    // Ordenando os n�meros em ordem crescente
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j]){
                trocaNumero(&v[i],&v[j]);
            }
        }
    }

    tFinal = clock(); // Tempo imediatamente ap�s o t�rmino da ordena��o dos n�meros

    // Imprimindo os n�meros
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    double tExecucao = (double)((tFinal - tInicial)/CLOCKS_PER_SEC);
    printf("\nTempo de execucao: %lf", tExecucao);
    free(v); // Libera��o da mem�ria alocada

    return 0;
}

// ---------- FUN��ES DA Q13 -----------
// Fun��o para trocar os valores das vari�veis
void trocaNumero(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
*/

/* ------------------------ QUEST�O 14 COM TEMPO DE EXECU��O ----------------------

// Assinatura das fun��es
int comparacao (const void *a, const void *b);

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int n;
    float *v;
    clock_t tInicial, tFinal;

    printf("Digite 8quantos n�meros ser�o informados: ");
    scanf("%d", &n);

    // Preenchendo o array de aloca��o de mem�ria din�mica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    tInicial = clock(); // Tempo imediatamente antes da ordena��o dos n�meros

    qsort(v, n, sizeof(float), comparacao);

    tFinal = clock(); // Tempo imediatamente ap�s o t�rmino da ordena��o dos n�meros

        // Imprimindo os n�meros
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    double tExecucao = (double)((tFinal - tInicial)/CLOCKS_PER_SEC);
    printf("\nTempo de execucao: %lf", tExecucao);

    free(v); // Libera��o da mem�ria alocada
    return 0;
}

// ---------- FUN��ES DA 14 -----------
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

