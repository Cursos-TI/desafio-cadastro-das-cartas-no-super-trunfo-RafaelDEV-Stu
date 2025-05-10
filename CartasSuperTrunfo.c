#include <stdio.h>

int main(){

char EstadoI , EstadoII;
char CidI[18] ,CidII[18];
char CardCodeI[4],CardCodeII[4];
float PIBI, PIBII;
float AreaI, AreaII;
int  PopI , PopII; 
int TurPonI ,TurPonII;

printf ("SUPER TRUNFO CADASTRO version 0.01\n");

printf ("Digite o estado 1:\n");
scanf (" %c", &EstadoI);
printf ("Digite o estado 2:\n");
scanf (" %c", &EstadoII);

printf ("Digite a cidade 1:\n");
scanf ("%s", &CidI);
printf ("Digite a cidade 2:\n");
scanf ("%s", &CidII);


printf ("Digite o codigo da cidade 1:\n");
scanf ("%s", &CardCodeI);
printf ("Digite o codigo da cidade 2:\n");
scanf ("%s", &CardCodeII);

printf ("Digite o PIB da cidade 1 (5 primeiros digitos com ponto):\n");
scanf ("%f", &PIBI);
printf ("Digite o PIB da cidade 2 (5 primeiros digitos com ponto):\n");
scanf ("%f", &PIBII);


printf ("Digite a area da cidade 1 em km2:\n");
scanf ("%f", &AreaI);
printf ("Digite a area da cidade 2 km2:\n");
scanf ("%f", &AreaII);


printf ("Digite a população da cidade 1:\n");
scanf ("%d", &PopI);
printf ("Digite a população da cidade 2:\n");
scanf ("%d", &PopII);

printf ("Digite a quantidade de pontos turisticos da cidade 1:\n");
scanf ("%d", &TurPonI);
printf ("Digite a quantidade de pontos turisticos da cidade 2:\n");
scanf ("%d", &TurPonII);


printf ("\nCarta 1\n\n\n");
printf ("Estado:%c\n\n" , EstadoI);
printf ("Cidade:%s\n\n" , CidI);
printf ("Codigo:%s\n\n" , CardCodeI);
printf ("PIB(em mi):%.2f\n\n" , PIBI);
printf ("Area(em km2):%.2f\n\n" , AreaI);
printf ("População:%d\n\n" , PopI);
printf ("Pontos Turisticos:%d\n\n\n" , TurPonI);

printf ("Carta 2\n\n\n");
printf ("Estado:%c\n\n" , EstadoII);
printf ("Cidade:%s\n\n" , CidII);
printf ("Codigo:%s\n\n" , CardCodeII);
printf ("PIB (em mi):%.2f\n\n" , PIBII);
printf ("Area (em km2):%.2f\n\n" , AreaII);
printf ("População:%d\n\n" , PopII);
printf ("Pontos Turisticos:%d\n\n" , TurPonII);

printf ("Cadastro Finalizado ! \n\n");

return 0;


}
