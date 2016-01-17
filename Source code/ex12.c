#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if(argc == 2) {
    printf("You only have one argument. You suck.\n");
  } else if(argc > 1 && argc < 4) { 
  /* change this to or have effectly the same result as removing the else 
    statement */
    printf("Here's your arguments:\n");

    for(i = 1; i < argc; i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("You have too many arguments. You suck.\n");
  }

  return 0;
}