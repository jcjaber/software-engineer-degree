#include <stdio.h>
int main(void) {
  float metre1, metre2, result;
  int option;
  metre1 = 0;
  metre2 = 0;
  result = 0;
  printf("\nC A L C U L O  D E  M E T R O S  Q U A D R A D O S");
  do {
    printf("\n\nDigite a primeira metragem do terreno: ");
    scanf("%f", &metre1);
    printf("\nDigite a segunda metragem do terreno: ");
    scanf("%f", &metre2);
    result = metre1 * metre2;
    printf("\n\nTerreno tem = %.2f m2", result);
    printf("\n\nDigite 1 para continuar ou 2 para sair: ");
    scanf("%d", &option);
  } while (option == 1);
  return 0;
}