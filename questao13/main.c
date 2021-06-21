#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções
void trocaNumero(float *a, float *b);

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int n;
    float *v;

    printf("Digite quantos números serão informados: ");
    scanf("%d", &n);

    // Preenchendo o array de alocação dinâmica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    // Ordenando os números
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j]){
                trocaNumero(&v[i],&v[j]);
            }
        }
    }

    // Imprimindo os números
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    free(v); // Liberação da memória alocada

    return 0;
}

// Função para trocar os valores das variáveis
void trocaNumero(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
