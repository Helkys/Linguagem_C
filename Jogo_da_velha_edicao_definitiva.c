#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
char jogo_vazio[3][3];
int p; 
void numerar(){
    p = 1;
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            jogo_vazio[l][c] = p+'0';
            p++;
        }
    }
}
void exibir(){
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf(" %c ", jogo_vazio[l][c]);
            if( c <= 1){
                printf("|");
            }
        }
        if(l <= 1 ){
            printf("\n------------\n");
        }
    }
}
void main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int jogadas_1 = 0, jogadas_2 = 0, jogador_1 = 1, jogador_2 = 0, vitoria = 0, escolha;
    numerar();
    while (jogadas_1 != 5 && jogadas_2 != 4){
        while (jogador_1 == 1){
           while (TRUE){
            system("cls");
            printf("===== JOGO DA VELHA =====\n\n");
            exibir();
            printf("\n\nO número indica a posição a ser marcada.\n");
            printf("Para DESISTIR digite 10\n\n");
            printf("JOGADOR 1 Escolha aonde deseja marca o 'X': ");
            fflush(stdin);
            scanf("%i", &escolha);
            if(escolha > 0 && escolha < 11){//validação de dados do jogogador 01
                break;
            } else {
                printf("\n======= OPÇÃO INVÁLIDA!!! ======\n");
                printf("=== ESCOLHA UMA OPÇÃO VÁLIDA ===\n");
                printf("---------------------------------\n");
                Sleep(2000);
                }//validação de dados do jogogador 01
           }
        if(escolha == 1 && jogo_vazio[0][0] != 'X' && jogo_vazio[0][0] != 'O'){
            jogo_vazio[0][0] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;

        }
        if(escolha == 2 && jogo_vazio[0][1] != 'X' && jogo_vazio[0][1] != 'O'){
            jogo_vazio[0][1] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 3 && jogo_vazio[0][2] != 'X' && jogo_vazio[0][2] != 'O'){
            jogo_vazio[0][2] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 4 && jogo_vazio[1][0] != 'X' && jogo_vazio[1][0] != 'O'){
            jogo_vazio[1][0] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 5 && jogo_vazio[1][1] != 'X' && jogo_vazio[1][1] != 'O'){
            jogo_vazio[1][1] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 6 && jogo_vazio[1][2] != 'X' && jogo_vazio[1][2] != 'O'){
            jogo_vazio[1][2] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 7 && jogo_vazio[2][0] != 'X' && jogo_vazio[2][0] != 'O'){
            jogo_vazio[2][0] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 8 && jogo_vazio[2][1] != 'X' && jogo_vazio[2][1] != 'O'){
            jogo_vazio[2][1] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 9 && jogo_vazio[2][2] != 'X' && jogo_vazio[2][2] != 'O'){
            jogo_vazio[2][2] = 'X';
			jogador_1 = 0;
			jogador_2 = 1;
			jogadas_1++;
        }
        if(escolha == 10){
            printf("O JOGADOR 1 desistiu!\n");
            printf("ENCERRANDO... AGUARDE...\n");
            jogadas_1 = 5;
			jogadas_2 = 4;
			jogador_2 = 0;
            Sleep(3750);
            break;
        }
        if(jogo_vazio[0][0] == 'X' && jogo_vazio[0][1] == 'X' && jogo_vazio[0][2] == 'X'){//condição de vitoria
            vitoria = 1;
        } else if(jogo_vazio[1][0] == 'X' && jogo_vazio[1][1] == 'X' && jogo_vazio[1][2] == 'X'){
            vitoria = 1;
        } else if(jogo_vazio[2][0] == 'X' && jogo_vazio[2][1] == 'X' && jogo_vazio[2][2] == 'X'){
            vitoria = 1;
        } else if(jogo_vazio[0][0] == 'X' && jogo_vazio[1][0] == 'X' && jogo_vazio[2][0] == 'X'){
            vitoria = 1;
        } else if(jogo_vazio[0][1] == 'X' && jogo_vazio[1][1] == 'X' && jogo_vazio[2][1] == 'X'){
            vitoria = 1;
        } else if(jogo_vazio[0][2] == 'X' && jogo_vazio[1][2] == 'X' && jogo_vazio[2][2] == 'X'){
            vitoria = 1;
        } else if(jogo_vazio[0][0] == 'X' && jogo_vazio[1][1] == 'X' && jogo_vazio[2][2] == 'X'){
            vitoria = 1;
        } else if(jogo_vazio[2][0] == 'X' && jogo_vazio[1][1] == 'X' && jogo_vazio[0][2] == 'X'){
            vitoria = 1;
        }
        if(vitoria == 1){//condição de vitoria
            system("cls");
            printf("O JOGADOR 1 ganhou!\n");
            exibir();
            printf("\nENCERRANDO... AGUARDE...\n");
            jogadas_1 = 5;
			jogadas_2 = 4;
			jogador_2 = 0;
            Sleep(3000);
            break;
        }//condição de vitoria
        }//jogador 1
        while (jogador_2 == 1){
           while (TRUE){
            system("cls");
            printf("===== JOGO DA VELHA =====\n\n");
            exibir();
            printf("\n\nO número indica a posição a ser marcada.\n");
            printf("Para DESISTIR digite 10\n\n");
            printf("JOGADOR 2 Escolha aonde deseja marca o 'O': ");
            fflush(stdin);
            scanf("%i", &escolha);
            if(escolha > 0 && escolha < 11){//validação de dados do jogogador 02
                break;
            } else {
                printf("\n======= OPÇÃO INVÁLIDA!!! ======\n");
                printf("=== ESCOLHA UMA OPÇÃO VÁLIDA ===\n");
                printf("---------------------------------\n");
                Sleep(2000);
                }//validação de dados do jogogador 02
           }
        if(escolha == 1 && jogo_vazio[0][0] != 'X' && jogo_vazio[0][0] != 'O'){
            jogo_vazio[0][0] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 2 && jogo_vazio[0][1] != 'X' && jogo_vazio[0][1] != 'O'){
            jogo_vazio[0][1] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 3 && jogo_vazio[0][2] != 'X' && jogo_vazio[0][2] != 'O'){
            jogo_vazio[0][2] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 4 && jogo_vazio[1][0] != 'X' && jogo_vazio[1][0] != 'O'){
            jogo_vazio[1][0] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 5 && jogo_vazio[1][1] != 'X' && jogo_vazio[1][1] != 'O'){
            jogo_vazio[1][1] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 6 && jogo_vazio[1][2] != 'X' && jogo_vazio[1][2] != 'O'){
            jogo_vazio[1][2] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 7 && jogo_vazio[2][0] != 'X' && jogo_vazio[2][0] != 'O'){
            jogo_vazio[2][0] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 8 && jogo_vazio[2][1] != 'X' && jogo_vazio[2][1] != 'O'){
            jogo_vazio[2][1] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 9 && jogo_vazio[2][2] != 'X' && jogo_vazio[2][2] != 'O'){
            jogo_vazio[2][2] = 'O';
			jogador_1 = 1;
			jogador_2 = 0;
			jogadas_2++;
        }
        if(escolha == 10){
            printf("O JOGADOR 2 desistiu!\n");
            printf("ENCERRANDO... AGUARDE...\n");
            jogadas_1 = 5;
			jogadas_2 = 4;
			jogador_2 = 0;
            Sleep(3750);
            break;
        }
        if(jogo_vazio[0][0] == 'O' && jogo_vazio[0][1] == 'O' && jogo_vazio[0][2] == 'O'){//condição de vitoria
            vitoria = 1;
        } else if(jogo_vazio[1][0] == 'O' && jogo_vazio[1][1] == 'O' && jogo_vazio[1][2] == 'O'){
            vitoria = 1;
        } else if(jogo_vazio[2][0] == 'O' && jogo_vazio[2][1] == 'O' && jogo_vazio[2][2] == 'O'){
            vitoria = 1;
        } else if(jogo_vazio[0][0] == 'O' && jogo_vazio[1][0] == 'O' && jogo_vazio[2][0] == 'O'){
            vitoria = 1;
        } else if(jogo_vazio[0][1] == 'O' && jogo_vazio[1][1] == 'O' && jogo_vazio[2][1] == 'O'){
            vitoria = 1;
        } else if(jogo_vazio[0][2] == 'O' && jogo_vazio[1][2] == 'O' && jogo_vazio[2][2] == 'O'){
            vitoria = 1;
        } else if(jogo_vazio[0][0] == 'O' && jogo_vazio[1][1] == 'O' && jogo_vazio[2][2] == 'O'){
            vitoria = 1;
        } else if(jogo_vazio[2][0] == 'O' && jogo_vazio[1][1] == 'O' && jogo_vazio[0][2] == 'O'){
            vitoria = 1;
        }
            if(vitoria == 1){//condição de vitoria
                system("cls");
                printf("\nO JOGADOR 2 ganhou!\n");
                printf("\n===== JOGO DA VELHA =====\n");
                exibir();
                printf("\n\n=========================\n\n");
                printf("ENCERRANDO... AGUARDE...\n");
                jogadas_1 = 5;
                jogadas_2 = 4;
                jogador_1 = 0;
                Sleep(3000);
                break;
            }
        }
    if(jogadas_1 == 4 && jogadas_2 == 4 && jogador_1 == 1 && jogador_2 == 0){//informa se o game deu empate
        system("cls");
        printf("<<EMPATE>>\n");
        printf("===== JOGO DA VELHA =====\n");
        exibir();
        printf("\n=========================\n\n");
        printf("ENCERRANDO... AGUARDE...\n");
        jogadas_1 = 5;
        jogadas_2 = 4;
        jogador_1 = 0;
        Sleep(3750);
        break;
        }//informa se o game deu empate
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}