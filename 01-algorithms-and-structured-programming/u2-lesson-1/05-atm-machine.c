#include <stdio.h>

int main(void) {
  int n = 0;

  printf("\n Digite(1) para Saldo, (2) para Extrato, (3) para Saque, (4) para Sair.");
  printf("\n Informe a operacao desejada: ");
  scanf("%d", &n);
  printf("\nOperacao: ");
  
  switch (n) {
  case 1:
    printf("Saldo");
    break;
  case 2:
    printf("Extrato");
    break;
  case 3:
    printf("Saque");
    break;
  case 4:
    printf("Sair");
    break;
  default:
    printf("Invalido");
  }
}