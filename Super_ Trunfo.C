#include <stdio.h>

int main(){

//Carta 1
char Carta1 = '1';
char Estado1 = 'A';
char Codigo1[5] = "A01";
char Nome1[20] = "São Paulo";
int Populacao1 = 12325000;
float Area1 = 1521.11;
float PIB1 = 699.28;
int Numero1 = 50;
float Densipopu1 = Populacao1 / Area1;
float PIBpercapita1 = PIB1 / (float)Populacao1 * 1000000;

// Carta 2
char Carta2 = '2';
char Estado2 = 'B';
char Codigo2[5] = "B02";
char Nome2[20] = "Rio de Janeiro";
int Populacao2 = 6748000;
float Area2 = 1200.25;
float PIB2 = 300.50;
int Numero2 = 30;
float Densipopu2 = Populacao2 / Area2;
float PIBpercapita2 = PIB2 / (float)Populacao2 *10000000;


// Imprime Carta 1
printf("Carta:%c\n", Carta1);
printf("Estado:%c\n", Estado1);
printf("Código:%s\n", Codigo1);
printf("Nome:%s\n", Nome1);
printf("População:%d\n", Populacao1);
printf("Área em Km2:%.2f\n", Area1);
printf("PIB:%.2f\n", PIB1);
printf("Número de pontos turísticos:%d\n",Numero1);
printf("Desnidade Pupulacional:%.2f hab/km2\n", Densipopu1);
printf("PIB per Capta: %.2f reais\n", PIBpercapita1);

// Imprime Carta 2
printf("Carta:%c\n", Carta2);
printf("Estado:%c\n", Estado2);
printf("Código:%s\n", Codigo2);
printf("Nome:%s\n", Nome2);
printf("População:%d\n", Populacao2);
printf("Área em Km2:%.2f\n", Area2);
printf("PIB:%.2f\n", PIB2);
printf("Número de pontos turísticos:%d\n", Numero2);
printf("Desnidade Pupulacional:%.2f hab/km2\n", Densipopu2);
printf("PIB per Capta: %.2f reais\n", PIBpercapita2);


return 0;

}
