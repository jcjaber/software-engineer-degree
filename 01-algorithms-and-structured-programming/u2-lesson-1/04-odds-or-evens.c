#include <stdio.h>

int main(void) {
  int number=0;

  printf("\n ### PAR OU IMPAR ###\n Digite um numero e saiba se e par ou impar: ");
  scanf("%d", &number);

  if(number % 2 == 0) {
    printf("\n O numero e par!");
  } else {
    printf("\n O numero e impar!");
  }

  return 0;
}