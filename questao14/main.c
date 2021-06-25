#include <stdio.h>
#include <stdlib.h>

// Assinatura das fun��es
int comparacao (const void *a, const void *b);

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int n;
    float *v;

    printf("Digite quantos n�meros ser�o informados: ");
    scanf("%d", &n);

    // Preenchendo o array de aloca��o de mem�ria din�mica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    qsort(v, n, sizeof(float), comparacao); // Chamando a fun��o qsort

    // Imprimindo os n�meros
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    free(v); // Libera��o da mem�ria alocada
    return 0;
}

// Fun��es
int comparacao (const void *a, const void *b){
    if(*(float*)a < *(float*)b){
    return -1;
  }else if(*(float*)a > *(float*)b){
    return 1;
  }else{
    return 0;
  }
}
