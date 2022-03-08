#include <stdio.h>

int main(void) {
  int qtyGrades = 0, option = 0;
  float grades=0, sumGrades=0, average=0;

  do {
    printf("\n C A L C U L A D O R A  D E  M E D I A  D E  N O T A S");
    printf("\n\n Digite a nota %d do aluno: ", qtyGrades + 1);
    scanf("%f", &grades);
    sumGrades += grades;
    qtyGrades++;
    printf("\n\n Digite (1) para inserir mais notas ou digite (2) para finalizar: ");
    scanf("%d", &option);
  } while (option != 2);

  printf("\n\n Quantidade de notas: %d", qtyGrades);
  average = sumGrades / (float) qtyGrades;
  printf("\n\n A media de notas e: %.2f", average);

  return 0;
  
}