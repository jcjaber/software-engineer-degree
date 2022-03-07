#include <stdio.h>

int main(void) {
  float budget;

  printf("\n Qual o orçamento de Joao e Maria?");
  scanf("%f", &budget);

  if(budget >= 10000) {
    printf("\n Joao e Maria farao uma viagem internacional!");
  } else {
    printf("\n Joao e Maria farao uma viagem nacional.");
  }
  return 0;
}