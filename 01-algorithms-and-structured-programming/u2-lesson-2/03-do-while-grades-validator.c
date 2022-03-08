#include <stdio.h>

int main(void){
  float passingGrade;
  
  do {
    printf("\nDigite a nota final do aluno: ");
    scanf("%f", &passingGrade);
  } while(passingGrade < 0 || passingGrade > 10);
  return 0;
}