#include <stdio.h>

int main(){

    // Movimentação da peça Torre 5 vezes para a direita:
    printf ("\nMovimentação da Torre: \n");
    for (int i = 0; i < 5; i++)
    {
        printf ("Direita!\n"); 
    }

    int b = 0;

    // Movimentação da peça Bispo
    printf ("----\nMovimentação do Bispo: \n");
    while (b < 5)
    {
        printf ("Cima, Direita! \n");
        b++;
    }
    
    int r = 0;

    // Movimentação da peça Rainha
    printf("----\nMovimentação da Rainha: \n");
    do
    {
        printf ("Esquerda! \n");
        r++;
    } while (r < 8);
    return 0;
}