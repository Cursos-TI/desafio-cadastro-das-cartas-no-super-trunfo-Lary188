#include <stdio.h>

int main(){

//Carta 1
char Carta1 = '1';
char Estado1 = 'A';
char Codigo1[10] = "A01";
char Nome1[15] = "São Paulo";
unsigned long int Populacao1 = 12325000;
float Area1 = 1521.11;
float PIB1 = 699.28;
int Numero1 = 50;
float Densipopu1 = Populacao1 / Area1;
float PIBpercapita1 = PIB1 / (float)Populacao1 * 1000000;
float Superpoder1 = Populacao1 + Area1 + PIB1 + Numero1 + PIBpercapita1 < Densipopu1;

// Carta 2
char Carta2 ='2';
char Estado2 = 'B';
char Codigo2[20] = "B02";
char Nome2[20] = "Rio de Janeiro";
unsigned long int Populacao2 = 6748000;
float Area2 = 1200.25;
float PIB2 = 300.50;
int Numero2 = 30;
float Densipopu2 = Populacao2 / Area2;
float PIBpercapita2 = PIB2 / (float)Populacao2 * 1000000;
float Superpoder2 = Populacao2 + Area2 + PIB2 + Numero2 + PIBpercapita2;

// Imprime Carta 1
printf("Carta:");
scanf (" %c", &Carta1);
printf("Estado:");
scanf(" %c", &Estado1);
printf("Código:");
scanf("%s", &Codigo1);
printf("Nome:");
scanf(" %s", &Nome1); //Como só imprime até o primeiro espaço, o código foi executado com as Abreviações dos nomes de estados.
printf("População:");
scanf("%lu", &Populacao1);
printf("Área em Km2:");
scanf("%f", &Area1);
printf("PIB:");
scanf(" %f", &PIB1);
printf("Número de pontos turísticos:");
scanf("%d", &Numero1);
printf("Desnidade Pupulacional:%.2f hab/km2\n", Densipopu1);
printf("PIB per Capta:%.2f reais\n",PIBpercapita1);
printf("Super Poder: %.2f\n", Superpoder1);

// Imprime Carta 2
printf("Carta:");
scanf(" %c", &Carta2);
printf("Estado:");
scanf(" %c", &Estado2);
printf("Código:");
scanf(" %s", &Codigo2);
printf("Nome:");
scanf(" %s", &Nome2); //Como só imprime até o primeiro espaço, o código foi executado com as Abreviações dos nomes de estados.
printf("População:");
scanf(" %lu", &Populacao2);
printf("Área em Km2:");
scanf(" %f", &Area2);
printf("PIB:");
scanf(" %f", &PIB2);
printf("Número de pontos turísticos:");
scanf(" %d", &Numero2);
printf("Desnidade Pupulacional:%.2f hab/km2\n", Densipopu2);
printf("PIB per Capta:%.2f reais\n", PIBpercapita2);
printf("Super Poder: %.2f\n", Superpoder2);

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


return 0;

}
