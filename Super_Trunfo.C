#include <stdio.h>
#include <string.h>
void limpaBuffer(){
    while(getchar() != '\n');
}
void Menu(){
printf("Bem- Vindo ao Super Trunfo LE\n");
printf("Opções do menu:\n");
    printf("1. Jogar - Inicia o processo de cadastro, comparação e declaração das cartas vencedoras.\n");
    printf("2. Ajuda - Exibe as instruções do jogo.\n");
    printf("3. Sair - Encerra o jogo.\n");

}
void Ajuda(){
    printf("Instruções do jogo:\n");
    printf("1. O jogo é composto por 2 jogadores, cada um com uma carta.\n");
    printf("2. Cada carta possui 7 atributos: População, Área, PIB, Número de pontos turísticos, Densidade populacional, PIB per capita e Super poder.\n");
    printf("3. Cada atributo é comparado com o da carta do outro jogador.\n");
    printf("4. O jogador que tiver mais atributos vencidos, vence a rodada.\n");
    printf("5. O jogo termina quando um jogador vencer 3 rodadas.\n");
    printf("6. O jogador vencedor é declarado no final do jogo.\n");
}

void Jogar(){

//Carta 1
char Carta1;
char Estado1;
char Codigo1[10];
char Nome1[15];
unsigned long int Populacao1;
float Area1;
float PIB1;
int Numero1;
float Densipopu1;
float PIBpercapita1;
float Superpoder1;

// Carta 2
char Carta2;
char Estado2;
char Codigo2[20];
char Nome2[20];
unsigned long int Populacao2;
float Area2;
float PIB2;
int Numero2;
float Densipopu2;
float PIBpercapita2;
float Superpoder2;

//Contadores de pontos
int Pontos1 = 0;
int Pontos2 = 0;

// Imprime Carta 1
printf("Carta:");
scanf (" %c", &Carta1);
printf("Estado:");
scanf(" %c", &Estado1);
printf("Código:");
scanf(" %s", Codigo1);
limpaBuffer();
printf("Nome:");
fgets(Nome1,sizeof(Nome1),stdin); 
Nome1[strcspn(Nome1, "\n")] = 0; // Remove newline character
printf("População:");
scanf("%lu", &Populacao1);
printf("Área em Km2:");
scanf(" %f", &Area1);
limpaBuffer();
printf("PIB:");
scanf(" %f", &PIB1);
printf("Número de pontos turísticos:");
scanf("%d", &Numero1);

// Calcula Densidade Populacional e PIB per Capita
Densipopu1 = Populacao1 / Area1;
PIBpercapita1 = PIB1 / (float)Populacao1 * 1000000;
Superpoder1 = Populacao1 + Area1 + PIB1 + Numero1 + PIBpercapita1 + (1/Densipopu1);

printf("Desnidade Pupulacional: %.2f hab/km2\n", Densipopu1);
printf("PIB per Capta: %.2f reais\n",PIBpercapita1);
printf("Super Poder: %.2f\n", Superpoder1);
printf("\n");

// Imprime Carta 2
printf("Carta:");
scanf(" %c", &Carta2);
printf("Estado:");
scanf(" %c", &Estado2);
printf("Código:");
scanf(" %s", Codigo2);
limpaBuffer();
printf("Nome:");
fgets(Nome2, sizeof(Nome2),stdin);
Nome2[strcspn(Nome2, "\n")] = 0; 
printf("População:");
scanf(" %lu", &Populacao2);
printf("Área em Km2:");
scanf(" %f", &Area2);
limpaBuffer();
printf("PIB:");
scanf(" %f", &PIB2);
printf("Número de pontos turísticos:");
scanf(" %d", &Numero2);

// Calcula Densidade Populacional e PIB per Capita
Densipopu2 = Populacao2 / Area2;
PIBpercapita2 = PIB2 / (float)Populacao2 * 1000000;
Superpoder2 = Populacao2 + Area2 + PIB2 + Numero2 + PIBpercapita2 +(1/Densipopu2);

printf("Desnidade Pupulacional: %.2f hab/km2\n", Densipopu2);
printf("PIB per Capta:%.2f reais\n", PIBpercapita2);
printf("Super Poder: %.2f\n", Superpoder2);
printf("\n");

//Imprime Resultados1
printf("Carta: %c\n", Carta1);
printf("Estado: %c\n", Estado1);
printf("Código: %s\n", Codigo1);
printf("Nome: %s\n", Nome1);
printf("População: %lu\n", Populacao1);
printf("Área em Km2: %.2f\n", Area1);
printf("PIB: %.2f\n", PIB1);
printf("Numero de pontos turísticos: %d\n", Numero1);
printf("Densidade Populacional: %.2f hab/km2\n", Densipopu1);
printf("PIB per capita: %.2f reais\n", PIBpercapita1);
printf("Super Poder: %.2f\n", Superpoder1);
printf("\n");

//Imprime Resultados 2
printf("Carta: %c\n", Carta2);
printf("Estado: %c\n", Estado2);
printf("Código: %s\n", Codigo2);
printf("Nome: %s\n", Nome2);
printf("População: %lu\n", Populacao2);
printf("Área em Km2: %.2f\n", Area2);
printf("PIB: %.2f\n", PIB2);
printf("Numero de pontos turísticos: %d\n", Numero2);
printf("Densidade Populacional: %.2f hab/km2\n", Densipopu2);
printf("PIB per capita: %.2f reais\n", PIBpercapita2);
printf("Super Poder: %.2f\n", Superpoder2);

//Comparação das Cartas
printf("\nComparação de Cartas\n");
if(Populacao1 > Populacao2){
    printf("População: Carta 1 venceu.\n");
Pontos1++;
}
else{
    printf("População: Carta 2 venceu.\n");
Pontos2++;
}
if(Area1 > Area2){
    printf("Área: Carta 1 venceu.\n");
Pontos1++;
}
else{
    printf("Área: Carta 2 venceu.\n");
Pontos2++;
}
if(PIB1 > PIB2){
    printf("PIB: Carta 1 venceu.\n");
Pontos1++;
}
else{
    printf("PIB: Carta 2 venceu.\n");
Pontos2++;
}
if(Numero1 > Numero2){
    printf("Numero de pontos turísticos: Carta 1 venceu.\n");
Pontos1++;
}
else{
    printf("Numero de ponstos turísticos: Carta 2 venceu.\n");
Pontos2++;
}
if(Densipopu1 < Densipopu2){
    printf("Desnidade Populacional: Carta 1 venceu.\n");
Pontos1++;
}
else{
    printf("Densidade Populacional: Carta 2 venceu.\n");
Pontos2++;
}
if(PIBpercapita1 > PIBpercapita2){
    printf("PIB per capita: Carta 1 venceu.\n");
Pontos1++;
}
else{
    printf("PIB per capita: Carta 2 venceu.\n");
Pontos2++;
}
if(Superpoder1 > Superpoder2){
    printf("Super poder: Carta 1 venceu.\n");
Pontos1++;
}
else{
    printf("Super poder: Carta 2 venceu.\n");
Pontos2++;
}
printf("\n");

//Determina a carta vencedora
printf("Resultado FInal\n");
if(Pontos1 > Pontos2){
    printf("Carta 1 %s venceu com %d pontos.\n",Nome1, Pontos1);
    printf("\n");
}
else if(Pontos2 > Pontos1){
    printf("Carta 2 %s venceu com %d pontos.\n",Nome2, Pontos2);
    printf("\n");
}
else{
    printf("Empate.\n");
    printf("\n");
}
}

void Sair(){
    printf("Obrigado por jogar Super Trunfo LE.\n");
}

int main(){
    int opcao;
    do{
        Menu();
        printf("Digite a opção desejada: ");
        printf("1. Jogar\n");
        printf("2. Ajuda\n");
        printf("3. Sair\n");
        scanf("%d", &opcao);
        limpaBuffer();
        switch(opcao){
            case 1:
                Jogar();
                break;
            case 2:
                Ajuda();
                break;
            case 3:
                Sair();
                break;
            default:
                printf("Opção inválida.\n");
        }
    }while(opcao != 3);

return 0;

}