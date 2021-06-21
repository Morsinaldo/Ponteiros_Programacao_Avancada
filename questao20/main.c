#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gc.h>

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    clock_t t1Inicial, t1Final, t2Inicial, t2Final;

    long int n = 10000000;
    int *p;

    t1Inicial = clock(); // Inicio da medição imediatamente antes da alocação dinâmica de memória sem o garbage collector

    for(long int i = 0; i <= n; i++){
        p = malloc(sizeof(int));
        free(p);
    }

    t1Final = clock() - t1Inicial; // Fim da medição imediatamente depois da alocação/liberação da memória dinâmica

    t2Inicial = clock(); // Inicio da medição imediatamente antes da alocação usando a função GC_MALLOC da biblioteca libgc-dev

    for(long int i = 0; i <= n; i++){
        p = GC_MALLOC(sizeof(int));
    }

    t2Final = clock() - t2Inicial; // Fim da medição imediatamente depois da alocação usando a biblioteca libgc

    printf("Tempo de execução da alocação dinâmica de memória: %lf \n", (double)t1Final/CLOCKS_PER_SEC);
    printf("Tempo de execução da alocação com a biblioteca LibGC: %lf \n", (double)t2Final/CLOCKS_PER_SEC);

    return 0;
}
