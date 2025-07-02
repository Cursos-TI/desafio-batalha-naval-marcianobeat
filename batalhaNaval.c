#include <stdio.h>

#define linha 10
#define coluna 10

int main() {
    
   int tabuleiro [linha] [coluna];
   int soma = 0;

   for (int i = 0; i < linha; ++i){
        for(int j = 0; j < coluna; ++j){

        tabuleiro [i][j] = soma;
        tabuleiro [1][1] = 3;
        printf ("%d ", tabuleiro[i][j]);
        

       
    }
    printf("\n");

    }
   
    printf(" teste %d ", tabuleiro [1][1]);

    return 0;
}
