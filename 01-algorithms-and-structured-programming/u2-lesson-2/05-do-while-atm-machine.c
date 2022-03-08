#include <stdio.h>
int main(void) {
  float sum=0;
  float value=0;
  int option=0;
  do {
    printf("\n M E N U  D E  O P C O E S");
    printf("\n 1. Deposito");
    printf("\n 2. Saque");
    printf("\n 3. Saldo");
    printf("\n 4. Sair");
    printf("\n Informe uma opcao: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      printf("\n Informe o valor: ");
      scanf("%f", &value);
      sum += value;
      break;
    case 2:
      printf("\n Informe o valor: ");
      scanf("%f", &value);
      sum -= value;
      break;
    case 3:
      printf("\n Saldo atual: R$ %.2f ", sum);
      break;
    case 4:
      printf("\n Saindo...");
      break;
    default:
      printf("\n Opcao invalida!");
    } 
  } while (option != 4);
  printf("\n\n Fim das operacoes!");
  return 0;
}