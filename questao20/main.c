#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gc.h>

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    clock_t t1Inicial, t1Final, t2Inicial, t2Final;

    long int n = 9999999999;
    int *p;

    t1Inicial = clock(); // Inicio da medi��o imediatamente antes da aloca��o din�mica de mem�ria sem o garbage collector

    for(long int i = 0; i <= n; i++){
        p = malloc(sizeof(int));
        free(p);
    }

    t1Final = clock(); // Fim da medi��o imediatamente depois da aloca��o/libera��o da mem�ria din�mica

    t2Inicial = clock(); // Inicio da medi��o imediatamente antes da aloca��o usando a fun��o GC_MALLOC da biblioteca libgc-dev

    for(long int i = 0; i <= n; i++){
        p = GC_MALLOC(sizeof(int));
    }

    t2Final = clock(); // Fim da medi��o imediatamente depois da aloca��o usando a biblioteca libgc

    double t1Execucao = (double)((t1Final - t1Inicial)/CLOCKS_PER_SEC);
    double t2Execucao = (double)((t2Final - t2Inicial)/CLOCKS_PER_SEC);

    printf("Tempo de execu��o da aloca��o din�mica de mem�ria: %lf \n", t1Execucao);
    printf("Tempo de execu��o da aloca��o com a biblioteca LibGC: %lf \n", t2Execucao);

    return 0;
}

