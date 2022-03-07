#include <stdio.h>
int main(void)
{
  char x;
  float value, discount, total;
  printf("\n Digite o valor da compra: ");
  scanf("%f", &value);
  printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
  printf("\n a. azul");
  printf("\n v. vermelho");
  printf("\n b. branco");
  printf("\n Digite a sua opcao: ");
  scanf("%s", &x);
  switch (x)
  {
  case 'a':
    printf("\n Voce escolheu a cor azul, seu desconto sera de 30 por cento.");
    discount = 30;
    break;
  case 'v':
    printf("\n Voce escolheu a cor vermelha, seu desconto sera de 20 por cento.");
    discount = 20;
    break;
  case 'b':
    printf("\n Voce escolheu a cor branca, seu desconto sera de 10 por cento.");
    discount = 10;
    break;
  default:
    printf("\n Opcao invalida, nao sera concedido desconto.");
    discount = 0;
  }
  total = value - (value * discount / 100);
  printf("\n O valor da sua compra e R$ %.2f", total);

  return 0;
}