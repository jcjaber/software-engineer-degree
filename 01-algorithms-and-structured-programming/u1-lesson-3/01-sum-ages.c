#include <stdio.h>

int main () {
  int age1 = 0;
  int age2 = 0;
  int result = 0;

  printf("\n Digite a primeira idade: ");
  scanf("%d", &age1);
  printf("\n Digite a segunda idade: ");
  scanf("%d", &age2);
  result = age1 + age2;
  printf("\n Resultado = %d", result);
}