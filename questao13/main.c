#include <stdio.h>
#include <stdlib.h>

// Assinatura das fun��es
void trocaNumero(float *a, float *b);

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int n;
    float *v;

    printf("Digite quantos n�meros ser�o informados: ");
    scanf("%d", &n);

    // Preenchendo o array de aloca��o din�mica
    v = malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    // Ordenando os n�meros
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j]){
                trocaNumero(&v[i],&v[j]);
            }
        }
    }

    // Imprimindo os n�meros
    for(int i = 0; i < n; i++){
        printf("%f ", v[i]);
    }

    free(v); // Libera��o da mem�ria alocada

    return 0;
}

// Fun��o para trocar os valores das vari�veis
void trocaNumero(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
