#include <stdio.h>

#define CLIENT_SIZE_NAME 100

struct client {
  char name[CLIENT_SIZE_NAME];
  int age;
};

int main() {
  struct client cli;
  int movie_rating;

  printf("\n Informe o nome do cliente: ");

  fflush(stdin);
  fgets(cli.name, CLIENT_SIZE_NAME, stdin);

  printf("\n Informe a idade do cliente: ");
  scanf("%d", &cli.age);

  printf("\n Informe a classificacao do filme: ");
  scanf("%d", &movie_rating);

  printf("\n Cliente: %s", cli.name);
  printf(" Idade: %d anos", cli.age);
  printf("\n Classificacao do filme: %d", movie_rating);
  return 0;
}