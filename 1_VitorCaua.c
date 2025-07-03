#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void titulo_jogo();
void matriz_jogo_velha(char matriz[3][3]);
void como_jogar();
void menu_principal(char matriz[3][3]);
int jogar(char matriz[3][3]);

int main(){
    char matriz[3][3];
    menu_principal(matriz);

    return 0;
}

void titulo_jogo(){
printf("                          __     ______     ______     ______        _____     ______ \n");   
printf("                         /\\ \\   /\\  __ \\   /\\  ___\\   /\\  __ \\      /\\  __-.  /\\  __ \\\n"); 
printf("                        \\\\ \\  \\ \\ \\/\\ \\  \\ \\ \\__ \\  \\ \\ \\/\\ \\     \\ \\ \\/\\ \\ \\ \\  __ \\\n");
printf("                       /\\_____\\  \\ \\_____\\  \\ \\_____\\  \\ \\_____\\     \\ \\____-  \\ \\\\ \\\\\n");
printf("                       \\/_____/   \\/_____/   \\/_____/   \\/_____/      \\/____/   \\//\\//\n");
printf("\n");
printf("                            __   __   ______     __         __  __     ______ \n");              
printf("                           /\\ \\ / /  /\\  ___\\   /\\ \\       /\\ \\_\\ \\   /\\  __ \\\n");              
printf("                           \\ \\ \\/ /  \\ \\  __\\   \\ \\ \\____  \\ \\  __ \\  \\ \\  __ \\\n");            
printf("                            \\ \\__|    \\ \\_____\\  \\ \\_____\\  \\ \\\\ \\\\  \\ \\\\ \\\\\n");          
printf("                             \\//      \\/_____/   \\/_____/   \\//\\//   \\//\\/_/\n");
}
void matriz_jogo_velha(char matriz[3][3]){
    system("cls");
    printf("  %c | %c | %c \n", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("  ----------\n");
    printf("  %c | %c | %c \n", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("  ----------\n");
    printf("  %c | %c | %c \n", matriz[2][0], matriz[2][1], matriz[2][2]);
}
void como_jogar(){
   
    system("cls");
    printf(" Como Jogar - Jogo da Velha\n\n");
    printf("O Jogo da Velha e uma disputa entre dois jogadores, que se revezam para marcar os espacos de um tabuleiro 3x3.\n");
    printf(" - Jogador 1 usa o simbolo X\n");
    printf(" - Jogador 2 usa o simbolo O\n\n");

    printf(" Regras do Jogo\n");
    printf("O tabuleiro tem 9 posicoes numeradas de 1 a 9, como no exemplo:\n");
    printf("    1 | 2  | 3  \n");
    printf("  ------------\n");
    printf("    4 | 5  | 6  \n");
    printf("  ------------\n");
    printf("    7 | 8  | 9  \n\n");

    printf("Cada jogador escolhe um número correspondente a posicao onde quer jogar.\n");
    printf("Os jogadores se alternam a cada rodada.\n");
    printf("O primeiro a formar uma linha com 3 simbolos (na horizontal, vertical ou diagonal) vence a partida.\n");
    printf("Se todas as posicoes forem preenchidas e ninguem vencer, o jogo termina em empate.\n\n");

    printf(" Exemplo de vitoria:\n");
    printf("    X | O  | X  \n");
    printf("  ------------\n");
    printf("      | X  | O  \n");
    printf("  ------------\n");
    printf("      |    | X  \n\n");

    printf("Neste exemplo, o Jogador 1 (X) venceu ao formar uma linha diagonal.\n\n");
    getch();

}
int jogar(char matriz[3][3]) {
    int linha, coluna, rodada, ganhou, posicao;
    char jogador;
    int opcao;

    do {
        ganhou = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matriz[i][j] = ' ';
            }
        }

       for (rodada = 1; rodada <= 9 && ganhou == 0; rodada++) {
        system("cls");
        titulo_jogo();
        matriz_jogo_velha(matriz);

        if (rodada % 2 == 1) {
            jogador = 'X';
        } else {
            jogador = 'O';
        }

        do {
            printf("\nJogador '%c', escolha uma posicao de 1 a 9: ", jogador);
            scanf("%d", &posicao);

            linha = (posicao - 1) / 3;
            coluna = (posicao - 1) % 3;

        } while (posicao < 1 || posicao > 9 || matriz[linha][coluna] != ' ');

        matriz[linha][coluna] = jogador;

        if (matriz[linha][0] == jogador && matriz[linha][1] == jogador && matriz[linha][2] == jogador) {
            ganhou = 1;
        } else if (matriz[0][coluna] == jogador && matriz[1][coluna] == jogador && matriz[2][coluna] == jogador) {
            ganhou = 1;
        } else if (linha == coluna && matriz[0][0] == jogador && matriz[1][1] == jogador && matriz[2][2] == jogador) {
            ganhou = 1;
        } else if ((linha + coluna) == 2 && matriz[0][2] == jogador && matriz[1][1] == jogador && matriz[2][0] == jogador) {
            ganhou = 1;
        }
    }


        system("cls");
        titulo_jogo();
        matriz_jogo_velha(matriz);

        if (ganhou) {
            printf("\n Parabens! O jogador '%c' venceu!\n", jogador);
        } else {
            printf("\n Deu velha! Ninguem venceu.\n");
        }

        do {
            printf("\n[1] Revanche\n");
            printf("[2] Voltar ao menu principal\n");
            printf("Escolha:");
            scanf("%i", &opcao);
        } while (opcao != 1 && opcao != 2);

        if (opcao == 2) {
            break;
        }

    } while (opcao == 1);

    return 0;
}
void menu_principal(char matriz[3][3]) {
    int opcao;

    do {
        system("cls");
        titulo_jogo();
        printf("\n");
        printf("[1] - Jogar\n");
        printf("[2] - Como Jogar\n");
        printf("[3] - Sair\n");
        printf("Escolha:\n");
        scanf("%i", &opcao);

        switch(opcao) {
            case 1:
                jogar(matriz);
                break;
            case 2:
                como_jogar();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Erro de Identificacao!\n");
                system("pause");
                break;
        }

    } while (opcao != 3);
}