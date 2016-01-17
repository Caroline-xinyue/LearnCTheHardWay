/* Simple Betting Game
"Jack Queen King" - computer shuffles these cards
player has to guess the position of queen.
If he wins, he takes 3*bet; if he loses, he loses the bet amount.
Player has $100 initially*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash = 100; //global variable that stores the cash
void Play(int bet) {
  char C[3] = {'J', 'Q', 'K'};
  printf("Shuffling ...");
  srand(time(NULL)); // seeding random number generator
  int i;
  for(i = 0; i < 5; i++) {
    int x = rand() % 3;
    int y = rand() % 3;
    int temp = C[x];
    C[x] = C[y];
    C[y] = temp; // swaps characters at position x and y
  }
  int playersGuess;
  printf("What is the position of queen - 1, 2, or 3?");
  scanf("%d", &playersGuess);
  if(C[playersGuess - 1] == 'Q') {
    cash += 3 * bet;
    printf("You win ! Result =%c%c%c Total Cash = %d", C[0], C[1], C[2], cash);
  } 
  else {
    cash -= bet;
    printf("You lose ! Result =%c%c%c Total Cash = %d", C[0], C[1], C[2], cash);
  }
}
int main()
{
  printf("Welcome to the Virtual Casino\n");
  printf("Total cash = $%d\n", cash);
  int bet;
  while(cash > 0) {
    printf("What is your bet? $");
    scanf("%d",&bet);
    if(bet == 0 || bet > cash) break;
    Play(bet);
    printf("\n***************\n");
  }
}