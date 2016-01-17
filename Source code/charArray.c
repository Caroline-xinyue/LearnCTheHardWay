#include <stdio.h>
// int main()
// {
//   char C[5]; // char C[6] would give the same result
//   C[0] = 'J';
//   C[1] = 'O';
//   C[2] = 'H';
//   C[3] = 'N';
//   C[4] = '\0';
//   int len = strlen(C);
//   printf("Length of String C = %d\n", len);
//   printf("%s\n", C);
//   /*Why is printf printing more than 4 characters which is the size of 
//   the array?
//   Because we have break the constraint that Strings in java has to be 
//   null terminated.
//   Fixed by line 10*/
// }

/* Use String literals */
int main()
{
  char C[4] = "John"; // null termination is implicit
  // size of 4 would cause compilation error
  /*Must instantiate and initialize at the same time:
  Invalid:
    char C[5];
    C = "John"
  */
  //char C[5] = {'J', 'O', 'H', 'N', '\0'}; 
  // To use comma separated list, Must add null termination explicitly
  printf("Size in bytes = %d\n", sizeof(C)); // should be 5 because of null termination
  int len = strlen(C); // still 4
  printf("Length of String C = %d\n", len);
  printf("%s\n", C);
  /*Why is printf printing more than 4 characters which is the size of 
  the array?
  Because we have break the constraint that Strings in java has to be 
  null terminated.
  Fixed by line 10*/
}