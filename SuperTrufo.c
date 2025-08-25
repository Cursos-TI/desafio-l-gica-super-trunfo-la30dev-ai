#include <stdio.h>
#include <string.h>

int main(){
  //Variáveis da carta 1
  char estado1 = 'A';
  char codigo1[3] = "A1";
  char cidade1[200] = "A";
  int populacao1 = 1;
  double area1 = 0.00;
  double pib1 = 0.00;
  int pontos_turisticos1 = 0;
  double densidade1 = 0.00;
  double ppc1 = 0.00;
  float poder1 = 0.00;
  
  //Variáveis da carta 2
  char estado2 = 'A';
  char codigo2[3] = "A1";
  char cidade2[200] = "A";
  int populacao2 = 1;
  double area2 = 0.00;
  double pib2 = 0.00;
  int pontos_turisticos2 = 0;
  double densidade2 = 0.00;
  double ppc2 = 0.00;
  float poder2 = 0.00;

  //Usuário insere informações da carta 1;
  printf("---CARTA 1---\n");
  printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
  scanf("%c",&estado1);
  printf("Digite um número de 01 a 04:\n");
  scanf("%s",&codigo1);
  printf("Digite o nome da cidade:\n");
  getchar();
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1,"\n")] = 0;
  printf("Digite a população da cidade:\n");
  scanf("%d",&populacao1);
  printf("Digite a área da cidade:\n");
  scanf("%lf",&area1);
  printf("Digite o pib da cidade:\n");
  scanf("%lf",&pib1);
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d",&pontos_turisticos1);

  getchar();

  printf("\n"); // Quebra uma linha pra formatar melhor;

  //Usuário insere informações da carta 2;
  printf("---CARTA 2---\n");
  printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
  scanf("%c",&estado2);
  printf("Digite um número de 01 a 04:\n");
  scanf("%s",&codigo2);
  printf("Digite o nome da cidade:\n");
  getchar();
  fgets(cidade2, 20, stdin);
  cidade2[strcspn(cidade2,"\n")] = 0;
  printf("Digite a população da cidade:\n");
  scanf("%d",&populacao2);
  printf("Digite a área da cidade:\n");
  scanf("%lf",&area2);
  printf("Digite o pib da cidade:\n");
  scanf("%lf",&pib2);
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d",&pontos_turisticos2);

  printf("\n"); // Quebra uma linha pra formatar melhor;

  printf("\n"); // Quebra uma linha pra formatar melhor;
  

  densidade1 = (double)populacao1/area1;
  ppc1 = pib1/(double)populacao1;
  poder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontos_turisticos1 + (float)ppc1 + (1/densidade1);
  densidade2 = (double)populacao2/area2;
  ppc2 = pib2/(double)populacao2;
  poder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontos_turisticos2 + (float)ppc2 + (1/densidade2);

  printf("Selecione o primeiro atributo para comparar:\n");
  printf("1- População\n");
  printf("2- Área\n");
  printf("3- PIB\n");
  printf("4- Número de pontos turísticos\n");
  printf("5- Densidade demográfica\n\n");
  
  int escolha1 = 0;
  int escolha2 = 0;
  scanf("%d",&escolha1);

  switch (escolha1){
    case 1:
    printf("Selecione o segundo atributo para comparar:\n");
    printf("1- Área\n");
    printf("2- PIB\n");
    printf("3- Número de pontos turísticos\n");
    printf("4- Densidade demográfica\n\n");
    scanf("%d",&escolha2);

switch (escolha2){
    case 1:
    escolha2 = 2;
    break;
    case 2:
    escolha2 = 3;
    break;
    case 3:
    escolha2 = 4;
    break;
    case 4:
    escolha2 = 5;
    break;
    default:
    escolha2 = 6;
    break;
  }
  //Comparação do atributo das cartas (População)
  printf("Comparação do primeiro atributo (Atributo: População):\n");
  printf("Carta 1 - %s: %d\n",cidade1,populacao1);
  printf("Carta 2 - %s: %d\n",cidade2,populacao2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (populacao1>populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
  }
  else if(populacao1==populacao2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
  }
  break;

   case 2:
    printf("Selecione o segundo atributo para comparar:\n");
    printf("1- População\n");
    printf("2- PIB\n");
    printf("3- Número de pontos turísticos\n");
    printf("4- Densidade demográfica\n\n");
    scanf("%d",&escolha2);

    switch (escolha2){
    case 1:
    escolha2 = 1;
    break;
    case 2:
    escolha2 = 3;
    break;
    case 3:
    escolha2 = 4;
    break;
    case 4:
    escolha2 = 5;
    break;
  }


  //Comparação do atributo das cartas (Área)
  printf("Comparação do primeiro atributo (Atributo: Área):\n");
  printf("Carta 1 - %s: %.2lf\n",cidade1,area1);
  printf("Carta 2 - %s: %.2lf\n",cidade2,area2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (area1>area2) {
    printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
  }
  else if(area1==area2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
  }
  break;

  case 3:
    printf("Selecione o segundo atributo para comparar:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- Número de pontos turísticos\n");
    printf("4- Densidade demográfica\n\n");
    scanf("%d",&escolha2);

    switch (escolha2){
    case 1:
    escolha2 = 1;
    break;
    case 2:
    escolha2 = 2;
    break;
    case 3:
    escolha2 = 4;
    break;
    case 4:
    escolha2 = 5;
    break;
  }

  //Comparação do atributo das cartas (PIB)
  printf("Comparação do primeiro atributo (Atributo: PIB):\n");
  printf("Carta 1 - %s: %.2lf\n",cidade1,pib1);
  printf("Carta 2 - %s: %.2lf\n",cidade2,pib2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (pib1>pib2) {
    printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
  }
  else if(pib1==pib2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
  }
  break;

  case 4:
    printf("Selecione o segundo atributo para comparar:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Densidade demográfica\n");
    scanf("%d",&escolha2);

    switch (escolha2){
    case 1:
    escolha2 = 1;
    break;
    case 2:
    escolha2 = 2;
    break;
    case 3:
    escolha2 = 3;
    break;
    case 4:
    escolha2 = 5;
    break;
  }

   //Comparação do atributo das cartas (Pontos Turisticos)
  printf("Comparação do primeiro atributo (Atributo: Pontos Turisticos):\n");
  printf("Carta 1 - %s: %d\n",cidade1,pontos_turisticos1);
  printf("Carta 2 - %s: %d\n",cidade2,pontos_turisticos2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (pontos_turisticos1>pontos_turisticos2) {
    printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
  }
  else if(pontos_turisticos1==pontos_turisticos2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
  }
  break;

  case 5:
    printf("Selecione o segundo atributo para comparar:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de pontos turísticos\n");
    scanf("%d",&escolha2);

    switch (escolha2){
    case 1:
    escolha2 = 1;
    break;
    case 2:
    escolha2 = 2;
    break;
    case 3:
    escolha2 = 3;
    break;
    case 4:
    escolha2 = 4;
    break;
  }

   //Comparação do atributo das cartas (Densidade Populacional)
  printf("Comparação do primeiro atributo (Atributo: Densidade Populacional):\n");
  printf("Carta 1 - %s: %.2lf\n",cidade1,densidade1);
  printf("Carta 2 - %s: %.2lf\n",cidade2,densidade2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (densidade1<densidade2) {
    printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
  }
  else if(densidade1==densidade2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
  }
  break;
}

printf("\n\n");

  switch (escolha2){
    case 1:
    //Comparação do atributo das cartas (População)
  printf("Comparação do segundo atributo (Atributo: População):\n");
  printf("Carta 1 - %s: %d\n",cidade1,populacao1);
  printf("Carta 2 - %s: %d\n",cidade2,populacao2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (populacao1>populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  else if(populacao1==populacao2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
  break;
    case 2:
    //Comparação do atributo das cartas (Área)
  printf("Comparação do segundo atributo (Atributo: Área):\n");
  printf("Carta 1 - %s: %.2lf\n",cidade1,area1);
  printf("Carta 2 - %s: %.2lf\n",cidade2,area2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (area1>area2) {
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
  break;
    case 3:
    //Comparação do atributo das cartas (PIB)
  printf("Comparação do segundo atributo (Atributo: PIB):\n");
  printf("Carta 1 - %s: %.2lf\n",cidade1,pib1);
  printf("Carta 2 - %s: %.2lf\n",cidade2,pib2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (pib1>pib2) {
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  else if(pib1==pib2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
  break;
    case 4:
    //Comparação do atributo das cartas (Pontos Turisticos)
  printf("Comparação do segundo atributo (Atributo: Pontos Turisticos):\n");
  printf("Carta 1 - %s: %d\n",cidade1,pontos_turisticos1);
  printf("Carta 2 - %s: %d\n",cidade2,pontos_turisticos2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (pontos_turisticos1>pontos_turisticos2) {
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  else if(pontos_turisticos1==pontos_turisticos2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
  break;
    case 5:
    //Comparação do atributo das cartas (Densidade Populacional)
  printf("Comparação do segundo atributo (Atributo: Densidade Populacional):\n");
  printf("Carta 1 - %s: %.2lf\n",cidade1,densidade1);
  printf("Carta 2 - %s: %.2lf\n",cidade2,densidade2);
  //Imprime "carta 1 venceu" caso o valor da carta 1 seja maior
  if (densidade1<densidade2) {
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  else if(densidade1==densidade2){
    printf("EMPATE!");
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
  break;
  }

char a = "a";
printf("\n");
getchar();
printf("Tecle Enter para continuar...\n\n");
scanf("%c",&a);

  //Imprime os dados da carta 1;
  printf("CARTA 1:\n");
  printf("Estado: %c\n",estado1);
  printf("Código: %c%s\n",estado1,codigo1);
  printf("Nome da Cidade: %s\n",cidade1);
  printf("População: %d\n",populacao1);
  printf("Área: %.2lf km²\n",area1);
  printf("PIB: %.2lf bilhões de reais\n",pib1);
  printf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
  printf("Densidade Populacional: %.2lf hab/km²\n",densidade1);
  printf("PIB per capita: %.2lf reais\n",ppc1);
  printf("Super Poder: %.2f reais\n\n",poder1);

  //Imprime os dados da carta 2;
  printf("CARTA 2:\n");
  printf("Estado: %c\n",estado2);
  printf("Código: %c%s\n",estado2,codigo2);
  printf("Nome da Cidade: %s\n",cidade2);
  printf("População: %d\n",populacao2);
  printf("Área: %.2lf km²\n",area2);
  printf("PIB: %.2lf bilhões de reais\n",pib2);
  printf("Número de Pontos Turísticos: %d\n",pontos_turisticos2);
  printf("Densidade Populacional: %.2lf hab/km²\n",densidade2);
  printf("PIB per capita: %.2lf reais\n",ppc2);
  printf("Super Poder: %.2f reais\n\n",poder2);


  printf("Comparando somatório de atributos\n");
  if (poder1 > poder2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  else if(poder1 == poder2){
    printf("EMPATE!\n");
  }
  else{
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
 
  /*Fim do código*/
  return 0;
  }