#include <stdio.h>

int main(void) {
  int age = 0;
  printf("\n Digite a sua idade: ");
  scanf("%d", &age);
  if (age >= 18) {
    printf("\n Voce ja pode tirar sua cnh, voce ja e maior de idade!");
  }
  return 0;
} 