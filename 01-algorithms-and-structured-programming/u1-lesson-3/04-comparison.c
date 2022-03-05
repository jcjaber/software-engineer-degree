#include <stdio.h>

int main(void) {
  int n1 = 0;
  int n2 = 0;
  printf("\n Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("\n Digite o segundo numero: ");
  scanf("%d", &n2);
  printf("\n Os numeros sao iguais? %d", n1 == n2);
  printf("\n O primeiro e maior que o segundo? %d", n1 > n2);
  printf("\n O primeiro e menor que o segundo? %d", n1 < n2);
}