#include <stdio.h>
#include <stdlib.h>

// Assinatura das fun��es
void somaVetor(int *v1, int *v2, int *v3, int n);

int main(){

    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    int n;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);

    // Aloca��o do ponteiro vetor de aloca��o din�mica
    int *v1 = malloc(n*sizeof(int));
    int *v2 = malloc(n*sizeof(int));
    int *v3 = malloc(n*sizeof(int));

    //  Preenchimento dos vetores
    prinf("Informe os elementos do primeiro vetor \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v1[i]);
    }

    prinf("Informe os elementos do segundo vetor \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v2[i]);
    }

    somaVetor(v1,v2,v3,n); // Chamando a fun��o para somar os vetores

    // Imprimindo o vetor
    printf("O vetor resultante da soma dois vetores informados �: ");
    for(int i = n; i < n; i++){
        printf("%d ", v3[i]);
    }

    // Libera��o da mem�ria alocada din�micamente
    free(v1);
    free(v2);
    free(v3);

    return 0;
}

// Fun��es

void somaVetor(int *v1, int *v2, int *v3, int n){
    for(int i = 0; i < n; i++){
        v3[i] = v1[i] + v2[i];
    }
}
