#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções
void multiplicaMatriz(int **A, int **B, int **C, int la, int ca, int cb);
void imprimeMatriz(int **A, int nl,int nc);

int main(){

    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int la,ca,cb; // lb = ca (O numero de linhas da matriz B é igual ao numero de colunas da matriz A)

    // Pegando as informações das matrizes
    printf("Informe o numero de linhas da matriz A: ");
    scanf("%d", &la);
    printf("Informe o numero de colunas da matriz A: ");
    scanf("%d", &ca);
    printf("Informe o numero de colunas da matriz B: ");
    scanf("%d", &cb);

    // Alocando os blocos auxuiliares das matrizes
    int **A = malloc(la*sizeof(int*));
    int **B = malloc(ca*sizeof(int*));
    int **C = malloc(la*sizeof(int*));

    // Alocando as linhas das matrizes
    A[0] = malloc(la*ca*sizeof(int));
    B[0] = malloc(ca*cb*sizeof(int));
    C[0] = malloc(la*cb*sizeof(int));

    // Fixando os ponteiros das matrizes
    for(int i = 1; i < la; i++){
        A[i] = A[i-1] + ca;
    }
    for(int i = 1; i < ca; i++){
        B[i] = B[i-1] + cb;
    }
    for(int i = 1; i < la; i++){
        C[i] = C[i-1] + cb;
    }

    // Preenchendo as matrizes
    printf("Informe os valores para a primeira matriz \n");
    for(int i = 0; i < la; i++){
        for(int j = 0; j < ca; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Informe os valores para a segunda matriz \n");
    for(int i = 0; i < ca; i++){
        for(int j = 0; j < cb; j++){
            scanf("%d", &B[i][j]);
        }
    }

    multiplicaMatriz(A,B,C,la,ca,cb); // Chamando a função de mutiplicar as matrizes

    // Imprimindo as matrizes
    printf("Matriz A");
    imprimeMatriz(A,la,ca);
    printf("Matriz B");
    imprimeMatriz(B,ca,cb);
    printf("Matriz C");
    imprimeMatriz(C,la,cb);

    // Liberando as matrizes (liberação na ordem inversa a qual foi alocada)
    free(A[0]);
    free(B[0]);
    free(C[0]);

    // Liberando os blocos de memória
    free(A);
    free(B);
    free(C);
    return 0;
}

// Funções
void multiplicaMatriz(int **A, int **B, int **C, int la, int ca, int cb){
    for(int i = 0; i < la; i++){
        for(int j = 0; j < cb; j++){
            int soma = 0;
            for(int k = 0; k < ca; k++){
                soma += A[i][k]*B[k][j];
            }
            C[i][j] = soma;
        }
    }
}

void imprimeMatriz(int **A, int nl,int nc){
    for(int i = 0; i < nl; i++){
        for(int j = 0; j < nc; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
