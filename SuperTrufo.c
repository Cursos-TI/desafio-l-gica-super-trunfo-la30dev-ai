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
  

  //Imprime os dados da carta 1;
  printf("CARTA 1:\n");
  printf("Estado: %c\n",estado1);
  printf("Código: %c%s\n",estado1,codigo1);
  printf("Nome da Cidade: %s\n",cidade1);
  printf("População: %d\n",populacao1);
  printf("Área: %.2lf km²\n",area1);
  printf("PIB: %.2lf bilhões de reais\n",pib1);
  printf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
  densidade1 = (double)populacao1/area1;
  printf("Densidade Populacional: %.2lf hab/km²\n",densidade1);
  ppc1 = pib1/(double)populacao1;
  printf("PIB per capita: %.2lf reais\n",ppc1);
  poder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontos_turisticos1 + (float)ppc1 + (1/densidade1);
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
  densidade2 = (double)populacao2/area2;
  printf("Densidade Populacional: %.2lf hab/km²\n",densidade2);
  ppc2 = pib2/(double)populacao2;
  printf("PIB per capita: %.2lf reais\n",ppc2);
  poder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontos_turisticos2 + (float)ppc2 + (1/densidade2);
  printf("Super Poder: %.2f reais\n\n",poder2);

  //Comparação do atributo das cartas (População)
  printf("Comparação de cartas (Atributo: População):\n");

  printf("Carta 1 - %s: %d\n",cidade1,populacao1);
  printf("Carta 2 - %s: %d\n",cidade2,populacao2);

//Imprime "carta 1 venceu" caso o valor da população da carta 1 seja maior
  if (populacao1>populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  //Imprime "carta 2 venceu" caso o valor da população da carta 2 seja maior
  else (populacao1>populacao2) {
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
  /*Fim do código*/
  return 0;
}
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
  

  //Imprime os dados da carta 1;
  printf("CARTA 1:\n");
  printf("Estado: %c\n",estado1);
  printf("Código: %c%s\n",estado1,codigo1);
  printf("Nome da Cidade: %s\n",cidade1);
  printf("População: %d\n",populacao1);
  printf("Área: %.2lf km²\n",area1);
  printf("PIB: %.2lf bilhões de reais\n",pib1);
  printf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
  densidade1 = (double)populacao1/area1;
  printf("Densidade Populacional: %.2lf hab/km²\n",densidade1);
  ppc1 = pib1/(double)populacao1;
  printf("PIB per capita: %.2lf reais\n",ppc1);
  poder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontos_turisticos1 + (float)ppc1 + (1/densidade1);
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
  densidade2 = (double)populacao2/area2;
  printf("Densidade Populacional: %.2lf hab/km²\n",densidade2);
  ppc2 = pib2/(double)populacao2;
  printf("PIB per capita: %.2lf reais\n",ppc2);
  poder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontos_turisticos2 + (float)ppc2 + (1/densidade2);
  printf("Super Poder: %.2f reais\n\n",poder2);

  //Comparação do atributo das cartas (População)
  printf("Comparação de cartas (Atributo: População):\n");

  printf("Carta 1 - %s: %d\n",cidade1,populacao1);
  printf("Carta 2 - %s: %d\n",cidade2,populacao2);

//Imprime "carta 1 venceu" caso o valor da população da carta 1 seja maior
  if (populacao1>populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }
  //Senão, carta 2 venceu:
  else {
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }
  printf("\n");
  /*Fim do código*/
  return 0;
}