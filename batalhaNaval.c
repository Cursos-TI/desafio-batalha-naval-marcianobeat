#include <stdio.h>

#define linha 10
#define coluna 10

int main() {
    
   int tabuleiro [linha] [coluna];
   int soma = 0;

   for (int i = 0; i < linha; ++i){
        for(int j = 0; j < coluna; ++j){
            
        tabuleiro [i][j] = soma;
        printf ("%d ", tabuleiro[i][j]);

        tabuleiro [1][1] = 40;
    }
    printf("\n");

    }
   
    printf(" teste %d ", tabuleiro [1][1]);

    return 0;
}
