#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    if(casas > 0) {
        printf("\tDIREITA\t");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if(casas > 0) {
        int i = 5;
        while (i > casas)
        {
            putchar('\t');
            i--;
        }
        i = 0;
        while(i < 5) {
            printf("CIMA ");
            for(int j = 0; j < 5; j++) {
                if(j > casas) break;
                printf("DIREITA ");
            };
            i++;
        }
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if(casas > 0) {
        printf("ESQUERDA\t");
        moverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int const MOV_BISPO = 5; // na diagonal (cima, direita)
    int const MOV_TORRE = 5; // para a direita
    int const MOV_RAINHA = 8; // para a esquerda
    int const MOV_CAVALO_CIMA = 2;
    int const MOV_CAVALO_DIR = 1;
    int i = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    moverBispo(MOV_BISPO); // movimento do Bispo com recursividade

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    moverTorre(MOV_TORRE);

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    moverRainha(MOV_RAINHA);

    printf("\n");
    printf("\n");

    // Implementação de Movimentação do Cavalo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Cavalo para cima e para a esquerda.
    for(i = 1; i <= MOV_CAVALO_DIR; i++) {
        int j = 1;
        do {
            printf("\tCIMA\n");
            j++;
        } while(j <= MOV_CAVALO_CIMA);
        printf("DIREITA");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
