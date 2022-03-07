#include <stdio.h>
int main(void) {
  int voter1 = 18;
  int voter2 = 60;

  if (voter1 && voter2 >= 18) {
    printf("\n Eleitores");
  } else {
    printf("\n Nao eleitores");
  }
  return 0;
}