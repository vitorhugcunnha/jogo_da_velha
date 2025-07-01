#include <stdio.h>
#include <stdlib.h>

void titulo_jogo();
void matriz_jogo_velha(char matriz[3][3]);

int main(){

    char matriz[3][3];

    system("cls");
    titulo_jogo();
    


   
.
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
    printf("   0    1    2");
    printf("0  %c | %c | %c", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("  ----*----*----");
    printf("1  %c | %c | %c", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("  ----*----*----");
    printf("2  %c | %c | %c", matriz[0][0], matriz[0][1], matriz[0][2]);
}