#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções
int comparacao (const void *a, const void *b);

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int n;
    float *v;

    printf("Digite quantos números serão informados: ");
    scanf("%d", &n);

    // Preenchendo o array de alocação de memória dinâmica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    qsort(v, n, sizeof(float), comparacao); // Chamando a função qsort

    // Imprimindo os números
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    free(v); // Liberação da memória alocada
    return 0;
}

// Funções
int comparacao (const void *a, const void *b){
    if(*(float*)a < *(float*)b){
    return -1;
  }else if(*(float*)a > *(float*)b){
    return 1;
  }else{
    return 0;
  }
}
