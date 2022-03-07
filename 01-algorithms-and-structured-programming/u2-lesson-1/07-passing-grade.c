#include <stdio.h>

int main(void)
{
  float passingGrade;
  printf("\n informe a nota final do aluno: ");
  scanf("%f", &passingGrade);

  if (passingGrade >= 60)
  {
    printf("\n Aluno aprovado!");
  } else if (passingGrade >= 50) {
    printf("\n Aluno em recuperacao.");
  }
  else {
    printf("\n Aluno Reprovado!");
  }

  return 0;
}