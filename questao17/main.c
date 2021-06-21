#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções
void somaVetor(int *v1, int *v2, int *v3, int n);

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int n;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);

    // Alocação do ponteiro vetor de alocação dinâmica
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

    somaVetor(v1,v2,v3,n); // Chamando a função para somar os vetores

    // Imprimindo o vetor
    printf("O vetor resultante da soma dois vetores informados é: ");
    for(int i = n; i < n; i++){
        printf("%d ", v3[i]);
    }

    // Liberação da memória alocada dinâmicamente
    free(v1);
    free(v2);
    free(v3);

    return 0;
}

// Funções

void somaVetor(int *v1, int *v2, int *v3, int n){
    for(int i = 0; i < n; i++){
        v3[i] = v1[i] + v2[i];
    }
}
