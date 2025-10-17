#include <stdio.h>

int main(){

  //Armazenando variáveis

  char Estado1, Estado2;
  char Codigo1[50], Codigo2[50];
  char Cidade1[100], Cidade2[50];
  int Populacao1, Populacao2;
  float Area1, Area2;
  float PIB_1, PIB_2;
  int PontosTuristicos1, PontosTuristicos2;

  //Informações da 1° carta

  printf("--- Carta 1 ---\n\n");

  printf("Digite a letra do Estado (de A a H): ");
  scanf(" %c", &Estado1);

  printf("Digite o código: ");
  scanf("%s", Codigo1);

  getchar(); // Limpa o '\n' do buffer

  printf("Digite o nome da cidade: ");
  fgets(Cidade1, sizeof(Cidade1), stdin);
  Cidade1[strcspn(Cidade1, "\n")] = 0; // Para remover o '\n'

  printf("Digite o número da população: ");
  scanf("%d", &Populacao1);

  printf("Digite a área: ");
  scanf(" %f", &Area1);

  printf("Digite o PIB_1: ");
  scanf("%f", &PIB_1);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &PontosTuristicos1);

  // Informações da 2° carta

  printf("---Carta 2---\n\n");

  printf("Digite a letra do Estado (de A a H): ");
  scanf(" %c", &Estado2);

  printf("Digite o código: ");
  scanf("%s", Codigo2);

  getchar();

  printf("Digite o nome da cidade: ");
  fgets(Cidade2, sizeof(Cidade2), stdin);
  Cidade2[strcspn(Cidade2, "\n")] = 0;

  printf("Digite o número da população: ");
  scanf("%d", &Populacao2);

  printf("Digite a área: ");
  scanf(" %f", &Area2);

  printf("Digite o PIB_2: ");
  scanf("%f", &PIB_2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &PontosTuristicos2);

  //Imprimindo os resultados

  printf("\n---- CARTA 1 ----\n\n");
  printf("- Estado: %c\n", Estado1);
  printf("- Código: %s\n", Codigo1);
  printf("- Cidade: %s\n", Cidade1);
  printf("- População: %d\n", Populacao1);
  printf("- Área: %.2f km²\n", Area1);
  printf("- PIB: R$ %.2f bilhões\n", PIB_1);
  printf("- Pontos Turísticos: %d\n", PontosTuristicos1);

  
  printf("\n---- CARTA 2 ----\n\n");
  printf("- Estado: %c\n", Estado2);
  printf("- Código: %s\n", Codigo2);
  printf("- Cidade: %s\n", Cidade2);
  printf("- População: %d\n", Populacao2);
  printf("- Área: %.2f km²\n", Area2);
  printf("- PIB: R$ %.2f bilhões\n", PIB_2);
  printf("- Pontos Turísticos: %d\n", PontosTuristicos2);
  
  return 0;
}
