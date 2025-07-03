#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void titulo_jogo();
void matriz_jogo_velha(char matriz[3][3]);
void como_jogar();

int main(){

    char matriz[3][3];
    int opcao;

    do
    {
        system("cls");
        titulo_jogo();
        printf("\n");
        printf("[1] - Jogar\n");
        printf("[2] - Como Jogar\n");
        printf("[3] - Sair\n");
        scanf("%i", &opcao);
    switch(opcao){
        case 1:
            
        break;
        case 2:
           como_jogar();

        break;
        case 3:

        break;
        default:
            printf("Erro de Identificacao!");
        break;
    }
    } while (opcao != 3);

    return 0;

}

void titulo_jogo(){
printf("                          __     ______     ______     ______        _____     ______ \n");   
printf("                         /\\ \\   /\\  __ \\   /\\  ___\\   /\\  __ \\      /\\  __-.  /\\  __ \\\n"); 
printf("                        _\\_\\ \\  \\ \\ \\/\\ \\  \\ \\ \\__ \\  \\ \\ \\/\\ \\     \\ \\ \\/\\ \\ \\ \\  __ \\\n");
printf("                       /\\_____\\  \\ \\_____\\  \\ \\_____\\  \\ \\_____\\     \\ \\____-  \\ \\_\\ \\_\\\n");
printf("                       \\/_____/   \\/_____/   \\/_____/   \\/_____/      \\/____/   \\/_/\\/_/\n");
printf("\n");
printf("                            __   __   ______     __         __  __     ______ \n");              
printf("                           /\\ \\ / /  /\\  ___\\   /\\ \\       /\\ \\_\\ \\   /\\  __ \\\n");              
printf("                           \\ \\ \\/ /  \\ \\  __\\   \\ \\ \\____  \\ \\  __ \\  \\ \\  __ \\\n");            
printf("                            \\ \\__|    \\ \\_____\\  \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\_\\\n");          
printf("                             \\/_/      \\/_____/   \\/_____/   \\/_/\\/_/   \\/_/\\/_/\n");
}
void matriz_jogo_velha(char matriz[3][3]){
    system("cls");
    printf("  %c | %c | %c \n", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("  ----*----*----\n");
    printf("  %c | %c | %c \n", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("  ----*----*----\n");
    printf("  %c | %c | %c \n", matriz[2][0], matriz[2][1], matriz[2][2]);
}

void como_jogar(){
   
    system("cls");
    printf("🕹️ Como Jogar - Jogo da Velha\n\n");
    printf("O Jogo da Velha é uma disputa entre dois jogadores, que se revezam para marcar os espaços de um tabuleiro 3x3.\n");
    printf(" - Jogador 1 usa o símbolo X\n");
    printf(" - Jogador 2 usa o símbolo O\n\n");

    printf("📋 Regras do Jogo\n");
    printf("O tabuleiro tem 9 posicoes numeradas de 1 a 9, como no exemplo:\n");
    printf("    1 | 2  | 3  \n");
    printf("  ----*----*----\n");
    printf("    4 | 5  | 6  \n");
    printf("  ----*----*----\n");
    printf("    7 | 8  | 9  \n\n");

    printf("Cada jogador escolhe um número correspondente a posicao onde quer jogar.\n");
    printf("Os jogadores se alternam a cada rodada.\n");
    printf("O primeiro a formar uma linha com 3 símbolos (na horizontal, vertical ou diagonal) vence a partida.\n");
    printf("Se todas as posições forem preenchidas e ninguém vencer, o jogo termina em empate.\n\n");

    printf("✅ Exemplo de vitória:\n");
    printf("    X | O  | X  \n");
    printf("  ----*----*----\n");
    printf("      | X  | O  \n");
    printf("  ----*----*----\n");
    printf("      |    | X  \n\n");

    printf("Neste exemplo, o Jogador 1 (X) venceu ao formar uma linha diagonal.\n\n");
    getch();

}