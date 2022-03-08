#include <stdio.h>

int main(void){
  float grade;
  printf("\nDigite a nota final do aluno: ");
  scanf("%f", &grade);
  while(grade < 0 || grade > 10){
    printf("\nNota invalida! Digite a nota final do aluno: ");
    scanf("%f", &grade);
  }
  return 0;
}