#include<stdio.h>

struct car{
  char model[20];
  int year;
  float value;
};

int main(){
  struct car dataCar;
  printf("\n Digite o modelo do automovel:");
  scanf("%s",&dataCar.model);
  printf("\n Digite o ano do automovel:");
  scanf("%d",&dataCar.year);
  printf("\n Digite o valor do automovel:");
  scanf("%f",&dataCar.value);

  printf("\n Dados Atribuidos");
  printf("\n Modelo: %s",dataCar.model);
  printf("\n Ano: %d",dataCar.year);
  printf("\n Valor: %.2f",dataCar.value);

}