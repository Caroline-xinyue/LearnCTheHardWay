#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv

  int i = argc - 1;
  while(i > 0) {
    printf("arg %d: %s\n", argc - i, argv[argc - i]);
    printf("Address of arg %d: %x\n", argc - i, &(*argv[argc - i]));
    i--;
  }

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon", "Washington", "Texas"
  };

  int num_states = 4;
  i = 0; //watch for this
  while(i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    printf("Address of state %d: %x\n", i, &(*states[i]));
    i++;
  }

  int j = 0;
  while(j < num_states && j < argc-1) {
    states[j] = argv[j+1];
    j++;
  }

  i = 0;
  while(i < num_states && i < argc) {
    printf("state %d: %s\n", i, states[i]);
    printf("Address of state %d: %x\n", i, &(*states[i]));
    i++;
  }

  return 0;
}