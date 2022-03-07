#include <stdio.h>

int main(void) {
  float grossSalary, inssTax, irTax, netSalary;

  printf("\n Calculo de salario liquido com desconto de IR e INSS.");
  printf("\n Digite o salario bruto: ");
  scanf("%f", &grossSalary);

  //Calculo do desconto de INSS
  if(grossSalary <= 1045.0) {
    inssTax = grossSalary * 0.075;
  } else if(grossSalary <= 2089.60) {
    inssTax = grossSalary * 0.09;
  } else if(grossSalary <= 2134.40 ) {
    inssTax = grossSalary * 0.12;
  } else {
    inssTax = grossSalary * 0.14;
  }

  //Calculo do desconto de IR
  if(grossSalary <= 1903.98) {
    irTax = 0;
  } else if(grossSalary <= 2826.65) {
    irTax = grossSalary * 0.075;
  } else if(grossSalary <= 3751.05 ) {
    irTax = grossSalary * 0.15;
  } else if(grossSalary <= 4664.68 ) {
    irTax = grossSalary * 0.225;
  } else {
    irTax = grossSalary * 0.275;
  }

  netSalary = grossSalary - inssTax - irTax;

  printf("\n Desconto INSS: %f", inssTax);
  printf("\n Desconto IF: %f", irTax);
  printf("\n Salario liquido: %f", netSalary);
}