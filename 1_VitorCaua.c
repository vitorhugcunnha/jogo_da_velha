#include <stdio.h>
#include <stdlib.h>

void titulo_jogo();
void matriz_jogo_velha(char matriz[3][3]);
void como_jogar();

int main(){

    char matriz[3][3];
    int opcao;

    system("cls");
    titulo_jogo();
    do
    {
        printf("\n");
        printf("[1] - Jogar\n");
        printf("[2] - Como Jogar\n");
        printf("[3] - Sair\n");
        scanf("%i", &opcao);
    switch(opcao){
        case 1:
            
        break;
        case 2:
           
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
    printf("  %c | %c | %c", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("  ----*----*----");
    printf("  %c | %c | %c", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("  ----*----*----");
    printf("  %c | %c | %c", matriz[2][0], matriz[2][1], matriz[2][2]);
}
void como_jogar(){
    system("cls");
    printf("🕹️ Como Jogar - Jogo da Velha\n");
    printf("O Jogo da Velha é uma disputa entre dois jogadores, que se revezam para marcar os espaços de um tabuleiro 3x3.\n");
    printf(" - Jogador 1 usa o símbolo X\n");
    printf(" - Jogador 1 usa o símbolo O\n");


    printf("📋 Regras do Jogo");

}