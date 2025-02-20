#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo, torre, rainha, cavalo;//variáveis

    printf("*****  movimentacao das peças de xadrez  ****\n");//titulo do jogo



    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("movimentacao do bispo 5 casas para diagonal para cima a esquerda\n");
    do {
    printf("bispo: cima esquerda\n");
    bispo++;
    
    }while(bispo <= 5);//movimentacao do bispo 5 casas para diagonal para cima a esquerda

    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    while (torre <= 5)
    {
        printf("torre: direita\n");
torre++;
}//movimentacao da torre 5 casas para a direita




    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    printf("movimentacao da rainha 8 casas para esquerda\n");
    for (rainha; rainha <= 8; rainha++)
    {
        printf("rainha:esquerda\n");
    }//movimentacao da rainha 8 casas para esquerda




    // Nível Aventureiro - Movimentação do Cavalo
   for (cavalo = 0; cavalo <=1;cavalo++)
{
do{
    printf("baixo\n");
  cavalo++;
}while (cavalo <=1);
printf("esquerda");
}
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
