#include <stdio.h>

#define SIZE_CLIENT_NAME 100

struct client {
  char name[SIZE_CLIENT_NAME];
  int age;
};

struct film {
  int movie_rating;
  int is_enable;
};


int main() {
  struct client cli;
  struct film film;
  

  printf("\n Informe o nome do cliente: ");

  fflush(stdin);
  fgets(cli.name, SIZE_CLIENT_NAME, stdin);

  printf("\n Informe a idade do cliente: ");
  scanf("%d", &cli.age);

  printf("\n O filme esta disponivel? 1-Sim / 2-Nao ");
  scanf("%d", &film.is_enable);

  printf("\n Informe a classificacao do filme: ");
  scanf("%d", &film.movie_rating);

  printf("\n Cliente: %s", cli.name);
  printf("\n Idade: %d anos", cli.age);
  printf("\n Classificacao do filme: %d", film.movie_rating);
  printf("\n O filme pode ser locado? %d", (film.is_enable) && (cli.age >= film.movie_rating));
  printf("\n Quanto tempo falta para que o filme seja adequado a faixa etaria do cliente? %d", (cli.age < film.movie_rating) * (film.movie_rating - cli.age));
  return 0;
}