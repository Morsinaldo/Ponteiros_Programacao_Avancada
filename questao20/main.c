#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gc.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    clock_t t1Inicial, t1Final, t2Inicial, t2Final;

    long int n = 9999999999;
    int *p;

    t1Inicial = clock(); // Inicio da medição imediatamente antes da alocação dinâmica de memória sem o garbage collector

    for(long int i = 0; i <= n; i++){
        p = malloc(sizeof(int));
        free(p);
    }

    t1Final = clock(); // Fim da medição imediatamente depois da alocação/liberação da memória dinâmica

    t2Inicial = clock(); // Inicio da medição imediatamente antes da alocação usando a função GC_MALLOC da biblioteca libgc-dev

    for(long int i = 0; i <= n; i++){
        p = GC_MALLOC(sizeof(int));
    }

    t2Final = clock(); // Fim da medição imediatamente depois da alocação usando a biblioteca libgc

    double t1Execucao = (double)((t1Final - t1Inicial)/CLOCKS_PER_SEC);
    double t2Execucao = (double)((t2Final - t2Inicial)/CLOCKS_PER_SEC);

    printf("Tempo de execução da alocação dinâmica de memória: %lf \n", t1Execucao);
    printf("Tempo de execução da alocação com a biblioteca LibGC: %lf \n", t2Execucao);

    return 0;
}

