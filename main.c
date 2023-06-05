#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
// DECLARANDO VARIAVEIS
int variavel_x=0;
int variavel_y=0;
int i=0;
int cont = 0;
int ganhar = 0;
int modo;
char opc[9];
int continuar = 1;
for(i=0; i<=8; i++){
opc[i]=' '; }
//Menu
printf("\n\t~~JOGO DA VELHA~~\n");
printf("\n\tModo De Jogo:\n");
printf("\n\tPlayer V Player ( 1 )\n");
printf("\n\tPlayer V CPU ( 2 )\n\n");
printf("\t");
scanf("%d", &modo);
if(modo == 1){
do{ limpar();
printf("\nPlayer V Player\n\n");
// MONTANDO COORDENADAS E TABULEIRO
printf(" 1 | 2 | 3\n"
" =========\n"
" 4 | 5 | 6\n"
" =========\n"
" 7 | 8 | 9\n");
//RESETAR AS VARIAVEIS
variavel_x=0;
variavel_y=0;
i=0;
cont = 0;
ganhar = 0;
for(int reset = 0; reset < 9; ++reset){
opc[reset] = ' ';
}
while(cont<9 && ganhar==0) {
if (cont%2==0) {
// SEQUENCIA DE JOGADAS
printf("\nJogador X, escolha sua jogada [seguindo o exemplo acima]: ");
scanf("%i", &variavel_x);
printf("\n");
//JOGADOR NUMERO 1 - UTILIZA
switch (variavel_x) {
case 1:
if (opc[0] == ' ') {
opc[0] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 2:
if (opc[1] == ' ') {
opc[1] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 3:
if (opc[2] == ' ') {
opc[2] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 4:
if (opc[3] == ' ') {
opc[3] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 5:
if (opc[4] == ' ') {
opc[4] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 6:
if (opc[5] == ' ') {
opc[5] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 7:
if (opc[6] == ' ') {
opc[6] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 8:
if (opc[7] == ' ') {
opc[7] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
case 9:
if (opc[8] == ' ') {
opc[8] = 'X';
cont += 1;
limpar();
} else {
printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
}
break;
default:
printf("\nOpcao invalida, por favor, escolha outra.\n");
break;
}
} else{
// SEQUENCIA DE JOGADAS
printf("\nJogador O, escolha sua jogada [seguindo o exemplo acima]: ");
scanf("%i", &variavel_y);
printf("\n");
//JOGADOR NUMERO 1 - UTILIZA
switch (variavel_y) {
case 1:
if (opc[0] == ' ') {
opc[0] = 'O'; cont += 1; limpar(); } else { printf("\nEssacoordenadajafoi escolhida, escolhaoutra.\n");
 }break;
  case 2: if (opc[1] == ' ') { opc[1] = 'O'; cont += 1; limpar(); }
   else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
    }break; case 3: if (opc[2] == ' ') { opc[2] = 'O'; cont += 1; limpar(); }
     else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
      }break; case 4: if (opc[3] == ' ') { opc[3] = 'O'; cont += 1; limpar(); }
       else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
       }break; case 5: if (opc[4] == ' ') { opc[4] = 'O'; cont += 1; limpar(); }
       else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
        }break; case 6: if (opc[5] == ' ') { opc[5] = 'O'; cont += 1; limpar(); }
        else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
        }break; case 7: if (opc[6] == ' ') { opc[6] = 'O'; cont += 1; limpar(); }
        else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
        }break; case 8: if (opc[7] == ' ') { opc[7] = 'O'; cont += 1; limpar(); }
        else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n");
        }break; case 9: if (opc[8] == ' ') { opc[8] = 'O'; cont += 1; limpar(); }
        else { printf("\nEssa coordenada ja foi escolhida, escolha outra.\n"); }
break;
default:
printf("\nOpcao invalida, por favor, escolha outra.\n");
break;
}
}
// MONTANDO COORDENADAS E TABULEIRO
printf(" %c|%c|%c\n"
" ========\n"
" %c|%c|%c\n"
" ========\n"
" %c|%c|%c\n", opc[0], opc[1], opc[2], opc[3], opc[4], opc[5], opc[6], opc[7], opc[8]);
//VALIDANDO VITORIA
if (opc[0]=='X' && opc[1]=='X' && opc[2]=='X' || opc[3]=='X' && opc[4]=='X' && opc[5]=='X'
|| opc[6]=='X' && opc[7]=='X' && opc[8]=='X'){
printf("\nO jogador 'X' ganhou! Parabens! Que pena para o jogador 'O'.\n\tENCERRANDO JOGO...\n");
ganhar=1;
} else if (opc[0]=='X' && opc[3]=='X' && opc[6]=='X' || opc[1]=='X' && opc[4]=='X' && opc[7]=='X'
|| opc[2]=='X' && opc[5]=='X' && opc[8]=='X'){
printf("\nO jogador 'X' ganhou! Parabens! Que pena para o jogador 'O'.\n\tENCERRANDO JOGO...\n");
ganhar=1;
}else if (opc[0]=='X' && opc[4]=='X' && opc[8]=='X' || opc[2]=='X' && opc[4]=='X' && opc[6]=='X'){
printf("\nO jogador 'X' ganhou! Parabens! Que pena para o jogador 'O'.\n\tENCERRANDO JOGO...\n");
ganhar=1;
}else if (opc[0]=='O' && opc[1]=='O' && opc[2]=='O' || opc[3]=='O' && opc[4]=='O' && opc[5]=='O'
|| opc[6]=='O' && opc[7]=='O' && opc[8]=='O'){
printf("\nO jogador 'O' ganhou! Parabens! Que pena para o jogador 'X'.\n\tENCERRANDO JOGO...\n");
ganhar=1;
}else if (opc[0]=='O' && opc[3]=='O' && opc[6]=='O' || opc[1]=='O' && opc[4]=='O' && opc[7]=='O'
|| opc[2]=='O' && opc[5]=='O' && opc[8]=='O'){
printf("\nO jogador 'O' ganhou! Parabens! Que pena para o jogador 'X'.\n\tENCERRANDO JOGO...\n");
ganhar=1;
}else if (opc[0]=='O' && opc[4]=='O' && opc[8]=='O' || opc[2]=='O' && opc[4]=='O' && opc[6]=='O'){
printf("\nO jogador 'O' ganhou! Parabens! Que pena para o jogador 'X'.\n\tENCERRANDO JOGO...\n");
ganhar=1;
}else if(opc[0]!=' ' && opc[1]!=' ' && opc[2]!=' ' && opc[3]!=' ' && opc[4]!=' ' && opc[5]!=' ' && opc[6]!=' '
&& opc[7]!=' ' && opc[8]!=' '){
printf("\nInfelizmente, ninguem ganhou dessa vez.\n");
ganhar=1;
}
}
//CONTINUAR JOGO
printf("\n\nJogar novamente ? Sim( 1 ) Voltar( 2 ) Sair( 3 )");
scanf("%d",&continuar);
if(continuar == 2){ //voltar pro menu
limpar();
main();
}
if(continuar == 3){ //encerra programa
exit(0);
}
}while(continuar == 1);
}
else if(modo == 2){ //MODO CPU
cpu();
} else{
printf("\nModo de Jogo Invalido.\n\n");
}
return 0;
}
//===================================================CPU=======================================================
//VARIAVEIS MUNDIAIS
char opc[8];
int jogada_cpu;
int jogada_player;
int cpu(){
for(int i=0; i<=8; i++){ //reseta espa�os
opc[i]=' '; }
printf("\t\nPlayer V CPU\n\n"); // TABULEIRO
printf( " 1 | 2 | 3\n"
" =========\n"
" 4 | 5 | 6\n"
" =========\n"
" 7 | 8 | 9\n");
//RODADA 1
printf("\nPlayer: ");
scanf("%d",&jogada_player);
printf("\n");
escolhas();
limpar();
mostra_tabuleiro();
printf("\nCPU :");
escolha_cpu();
printf("\n");
limpar();
mostra_tabuleiro();
//RODADA 2
printf("\nPlayer: ");
scanf("%d",&jogada_player);
printf("\n");
escolhas(jogada_player);
limpar();
mostra_tabuleiro();
printf("\nCPU :");
escolha_cpu();
printf("\n");
limpar();
mostra_tabuleiro();
//RODADA 3
printf("\nPlayer: ");
scanf("%d",&jogada_player);
printf("\n");
escolhas(jogada_player);
limpar();
mostra_tabuleiro();
validar();
printf("\nCPU :");
escolha_cpu();
printf("\n");
limpar();
mostra_tabuleiro();
validar();
//RODADA 4
printf("\nPlayer: ");
scanf("%d",&jogada_player);
printf("\n");
escolhas(jogada_player);
limpar();
mostra_tabuleiro();
validar();
printf("\nCPU :");
escolha_cpu();
printf("\n");
limpar();
mostra_tabuleiro();
validar();
//RODADA 5
printf("\nPlayer: ");
scanf("%d",&jogada_player);
printf("\n");
escolhas(jogada_player);
limpar();
mostra_tabuleiro();
validar();
jogar_novamente();
}
int escolhas(){ // ESCOLHA DO JOGADOR
switch(jogada_player){
case 1:
if(opc[0] == ' ')
opc[0] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 2:
if(opc[1] == ' ')
opc[1] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 3:
if(opc[2] == ' ')
opc[2] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 4:
if(opc[3] == ' ')
opc[3] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 5:
if(opc[4] == ' ')
opc[4] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 6:
if(opc[5] == ' ')
opc[5] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 7:
if(opc[6] == ' ')
opc[6] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 8:
if(opc[7] == ' ')
opc[7] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
case 9:
if(opc[8] == ' ')
opc[8] = 'X';
else{
printf("Jogada Invalida jogue novamente: ");
scanf("%d",&jogada_player);
escolhas();}
break;
default:{
printf("Jogada Invalida, jogue novamente");
scanf("%d",&jogada_player);
escolhas();}
}
}
mostra_tabuleiro(){ //MOSTRA TABULEIRO
printf( " %c | %c | %c\n"
" =========\n"
" %c | %c | %c\n"
" =========\n"
" %c | %c | %c\n",opc[0],opc[1],opc[2],opc[3],opc[4],opc[5],opc[6],opc[7],opc[8]);
}
// opc0|opc1|opc2
// opc3|opc4|opc5
// opc6|opc7|opc8
int escolha_cpu(){ // ESCOLHA DA MAQUINA + INTELIGENCIA
//TENTAR GANHAR PRIMEIRO
if(opc[0] == 'O' && opc[2] == 'O'){
if (opc[1] == ' '){
opc[1] = 'O'; return;} }
if(opc[3] == 'O' && opc[5] == 'O'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[6] == 'O' && opc[8] == 'O'){
if (opc[7] == ' '){
opc[7] = 'O'; return;} }
if(opc[0] == 'O' && opc[6] == 'O'){
if (opc[3] == ' '){
opc[3] = 'O'; return;} }
if(opc[1] == 'O' && opc[7] == 'O'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[2] == 'O' && opc[8] == 'O'){
if (opc[5] == ' '){
opc[5] = 'O'; return;} }
if(opc[0] == 'O' && opc[8] == 'O'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[2] == 'O' && opc[6] == 'O'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[0] == 'O' && opc[4] == 'O'){
if (opc[8] == ' '){
opc[8] = 'O'; return;} }
if(opc[8] == 'O' && opc[4] == 'O'){
if (opc[0] == ' '){
opc[0] = 'O'; return;} }
if(opc[2] == 'O' && opc[4] == 'O'){
if (opc[6] == ' '){
opc[6] = 'O'; return;} }
if(opc[6] == 'O' && opc[4] == 'O'){
if (opc[2] == ' '){
opc[2] = 'O'; return;} }
if(opc[0] == 'O' && opc[3] == 'O'){
if (opc[6] == ' '){
opc[6] = 'O'; return;} }
if(opc[1] == 'O' && opc[4] == 'O'){
if (opc[7] == ' '){
opc[7] = 'O'; return;} }
if(opc[2] == 'O' && opc[5] == 'O'){
if (opc[8] == ' '){
opc[8] = 'O'; return;} }
if(opc[6] == 'O' && opc[3] == 'O'){
if (opc[0] == ' '){
opc[0] = 'O'; return;} }
if(opc[7] == 'O' && opc[4] == 'O'){
if (opc[1] == ' '){
opc[1] = 'O'; return;} }
if(opc[8] == 'O' && opc[5] == 'O'){
if (opc[2] == ' '){
opc[2] = 'O'; return;} }
if(opc[0] == 'O' && opc[1] == 'O'){
if (opc[2] == ' '){
opc[2] = 'O'; return;} }
if(opc[3] == 'O' && opc[4] == 'O'){
if (opc[5] == ' '){
opc[5] = 'O'; return;} }
if(opc[6] == 'O' && opc[7] == 'O'){
if (opc[8] == ' '){
opc[8] = 'O'; return;} }
if(opc[2] == 'O' && opc[1] == 'O'){
if (opc[0] == ' '){
opc[0] = 'O'; return;} }
if(opc[5] == 'O' && opc[4] == 'O'){
if (opc[3] == ' '){
opc[3] = 'O'; return;} }
if(opc[8] == 'O' && opc[8] == 'O'){
if (opc[7] == ' '){
opc[6] = 'O'; return; } }
// ATRAPALHAR SE NAO GANHAR
// opc0|opc1|opc2
// opc3|opc4|opc5
// opc6|opc7|opc8
if(opc[0] == 'X' && opc[2] == 'X'){
if (opc[1] == ' '){
opc[1] = 'O'; return;} }
if(opc[3] == 'X' && opc[5] == 'X'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[6] == 'X' && opc[8] == 'X'){
if (opc[7] == ' '){
opc[7] = 'O'; return;} }
if(opc[0] == 'X' && opc[6] == 'X'){
if (opc[3] == ' '){
opc[3] = 'O'; return;} }
if(opc[1] == 'X' && opc[7] == 'X'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[2] == 'X' && opc[8] == 'X'){
if (opc[5] == ' '){
opc[5] = 'O'; return;} }
if(opc[0] == 'X' && opc[8] == 'X'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[2] == 'X' && opc[6] == 'X'){
if (opc[4] == ' '){
opc[4] = 'O'; return;} }
if(opc[0] == 'X' && opc[4] == 'X'){
if (opc[8] == ' '){
opc[8] = 'O'; return;} }
if(opc[8] == 'X' && opc[4] == 'X'){
if (opc[0] == ' '){
opc[0] = 'O'; return;} }
if(opc[2] == 'X' && opc[4] == 'X'){
if (opc[6] == ' '){
opc[6] = 'O'; return;} }
if(opc[6] == 'X' && opc[4] == 'X'){
if (opc[2] == ' '){
opc[2] = 'O'; return;} }
if(opc[0] == 'X' && opc[3] == 'X'){
if (opc[6] == ' '){
opc[6] = 'O'; return;} }
if(opc[1] == 'X' && opc[4] == 'X'){
if (opc[7] == ' '){
opc[7] = 'O'; return;} }
if(opc[2] == 'X' && opc[5] == 'X'){
if (opc[8] == ' '){
opc[8] = 'O'; return;} }
if(opc[6] == 'X' && opc[3] == 'X'){
if (opc[0] == ' '){
opc[0] = 'O'; return;} }
if(opc[7] == 'X' && opc[4] == 'X'){
if (opc[1] == ' '){
opc[1] = 'O'; return;} }
if(opc[8] == 'X' && opc[5] == 'X'){
if (opc[2] == ' '){
opc[2] = 'O'; return;} }
if(opc[0] == 'X' && opc[1] == 'X'){
if (opc[2] == ' '){
opc[2] = 'O'; return;} }
if(opc[3] == 'X' && opc[4] == 'X'){
if (opc[5] == ' '){
opc[5] = 'O'; return;} }
if(opc[6] == 'X' && opc[7] == 'X'){
if (opc[8] == ' '){
opc[8] = 'O'; return;} }
if(opc[2] == 'X' && opc[1] == 'X'){
if (opc[0] == ' '){
opc[0] = 'O'; return;} }
if(opc[5] == 'X' && opc[4] == 'X'){
if (opc[3] == ' '){
opc[3] = 'O'; return;} }
if(opc[8] == 'X' && opc[8] == 'X'){
if (opc[7] == ' '){
opc[6] = 'O'; return; } }
jogada_aleatoria(); // JOGAR ALEATORIAMENTE SE NAO PUDER GANHAR/ATRAPALHAR
}
int validar(){ // VALIDAR VITORIA
if (opc[0]=='X' && opc[1]=='X' && opc[2]=='X' || opc[3]=='X' && opc[4]=='X' && opc[5]=='X'
|| opc[6]=='X' && opc[7]=='X' && opc[8]=='X'){
printf("\nO jogador 'X' ganhou! Parabens! Que pena para o jogador 'O'.\n\tENCERRANDO JOGO...\n");
jogar_novamente();
} else if (opc[0]=='X' && opc[3]=='X' && opc[6]=='X' || opc[1]=='X' && opc[4]=='X' && opc[7]=='X'
|| opc[2]=='X' && opc[5]=='X' && opc[8]=='X'){
printf("\nO jogador 'X' ganhou! Parabens! Que pena para o jogador 'O'.\n\tENCERRANDO JOGO...\n");
jogar_novamente();
}else if (opc[0]=='X' && opc[4]=='X' && opc[8]=='X' || opc[2]=='X' && opc[4]=='X' && opc[6]=='X'){
printf("\nO jogador 'X' ganhou! Parabens! Que pena para o jogador 'O'.\n\tENCERRANDO JOGO...\n");
jogar_novamente();
}else if (opc[0]=='O' && opc[1]=='O' && opc[2]=='O' || opc[3]=='O' && opc[4]=='O' && opc[5]=='O'
|| opc[6]=='O' && opc[7]=='O' && opc[8]=='O'){
printf("\nO jogador 'O' ganhou! Parabens! Que pena para o jogador 'X'.\n\tENCERRANDO JOGO...\n");
jogar_novamente();
}else if (opc[0]=='O' && opc[3]=='O' && opc[6]=='O' || opc[1]=='O' && opc[4]=='O' && opc[7]=='O'
|| opc[2]=='O' && opc[5]=='O' && opc[8]=='O'){
printf("\nO jogador 'O' ganhou! Parabens! Que pena para o jogador 'X'.\n\tENCERRANDO JOGO...\n");
jogar_novamente();
}else if (opc[0]=='O' && opc[4]=='O' && opc[8]=='O' || opc[2]=='O' && opc[4]=='O' && opc[6]=='O'){
printf("\nO jogador 'O' ganhou! Parabens! Que pena para o jogador 'X'.\n\tENCERRANDO JOGO...\n");
jogar_novamente();
}else if(opc[0]!=' ' && opc[1]!=' ' && opc[2]!=' ' && opc[3]!=' ' && opc[4]!=' ' && opc[5]!=' ' && opc[6]!=' '
&& opc[7]!=' ' && opc[8]!=' '){
printf("\nInfelizmente, ninguem ganhou dessa vez.\n");
jogar_novamente();
}
}
int jogar_novamente(){
int continuar;
printf("\nJogar Novamente ? Sim( 1 ) Voltar( 2 ) Sair( 3 ) "); // JOGAR NOVAMENTE
scanf("%d",&continuar);
if(continuar == 1){
limpar();
cpu();}
if(continuar == 2){ // VOLTAR PRO MENU
limpar();
main();
}
if(continuar == 3){ // FECHAR PROGRAMA
exit(0);
}
}
int jogada_aleatoria(){
srand((unsigned) time (NULL)); // NUMERO ALEATORIO
jogada_cpu = 1 + rand() % 9;
printf("%d",jogada_cpu);
switch(jogada_cpu){ // ESCOLHA ALEATORIA
case 0:
jogada_cpu = 1;
case 1:
if(opc[0] == ' '){
opc[0] = 'O';
}else{
jogada_cpu = 2;
if(opc[1] == ' '){
opc[1] = 'O';
}else{
jogada_cpu = 3;
if(opc[2] == ' '){
opc[2] = 'O';
}else{
jogada_cpu = 4;
if(opc[3] == ' '){
opc[3] = 'O';
}else{
jogada_cpu = 5;
if(opc[4] == ' '){
opc[4] = 'O';
}else{
jogada_cpu = 6;
if(opc[5] == ' '){
opc[5] = 'O';
}else{
jogada_cpu = 7;
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
} } }}}}}}
break;
case 2:
if(opc[1] == ' '){
opc[1] = 'O';
}else{
jogada_cpu = 3;
if(opc[2] == ' '){
opc[2] = 'O';
}else{
jogada_cpu = 4;
if(opc[3] == ' '){
opc[3] = 'O';
}else{
jogada_cpu = 5;
if(opc[4] == ' '){
opc[4] = 'O';
}else{
jogada_cpu = 6;
if(opc[5] == ' '){
opc[5] = 'O';
}else{
jogada_cpu = 7;
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
} } }}}}}
break;
case 3:
if(opc[2] == ' '){
opc[2] = 'O';
}else{
jogada_cpu = 4;
if(opc[3] == ' '){
opc[3] = 'O';
}else{
jogada_cpu = 5;
if(opc[4] == ' '){
opc[4] = 'O';
}else{
jogada_cpu = 6;
if(opc[5] == ' '){
opc[5] = 'O';
}else{
jogada_cpu = 7;
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
} } }}}}
break;
case 4:
if(opc[3] == ' '){
opc[3] = 'O';
}else{
jogada_cpu = 5;
if(opc[4] == ' '){
opc[4] = 'O';
}else{
jogada_cpu = 6;
if(opc[5] == ' '){
opc[5] = 'O';
}else{
jogada_cpu = 7;
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
} } }}}
break;
case 5:
if(opc[4] == ' '){
opc[4] = 'O';
}else{
jogada_cpu = 6;
if(opc[5] == ' '){
opc[5] = 'O';
}else{
jogada_cpu = 7;
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
} } }}
break;
case 6:
if(opc[5] == ' '){
opc[5] = 'O';
}else{
jogada_cpu = 7;
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
} } }
break;
case 7:
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
} }
break;
case 8:
if(opc[7] == ' '){
opc[7] = 'O';
}else{
jogada_cpu = 9;
if(opc[8] == ' '){
opc[8] = 'O';
}
}
break;
case 9:
if(opc[8] == ' '){
opc[8] = 'O';
}else{
jogada_cpu = 1;
if(opc[0] == ' '){
opc[0] = 'O';
}else{
jogada_cpu = 2;
if(opc[1] == ' '){
opc[1] = 'O';
}else{
jogada_cpu = 3;
if(opc[2] == ' '){
opc[2] = 'O';
}else{
jogada_cpu = 4;
if(opc[3] == ' '){
opc[3] = 'O';
}else{
jogada_cpu = 5;
if(opc[4] == ' '){
opc[4] = 'O';
}else{
jogada_cpu = 6;
if(opc[5] == ' '){
opc[5] = 'O';
}else{
jogada_cpu = 7;
if(opc[6] == ' '){
opc[6] = 'O';
}else{
jogada_cpu = 8;
if(opc[7] == ' '){
opc[7] = 'O';
}
} } }}}}}}
break;
}
}
int limpar(){
system("cls"); // LIMPAR TELA
}
