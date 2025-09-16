// Desafio de Xadrez - MateCheck
// Aluno: Samuel Figueiredo Vieira 
// Matricula: 202507157906
// Nível Novato - Movimentação das Peças
#include <stdio.h>

    int main(){
              
        int b = 1;
        int r = 1;
        int rainha = 8;

        //Mover a torre 5 casas a direita
            printf("Movimento da Torre\n");
        for (int t = 1; t <= 5; t++) {
            printf("Direita (%d)\n", t);
        }
        
        // Implementação de Movimentação do Bispo
            printf("Movimentação do Bispo em Diagonal\n");
        while (b <= 5) {
            printf("Cima, Direita (%d)\n", b);
            b++;
        }

         // Implementação de Movimentação da Rainha (DO-WHILE)
            printf("Movimentação da Rainha\n");
        do {
            printf("Esquerda (%d)\n", r);
            r++;
        } while (r <= rainha);
    return 0;
    }

