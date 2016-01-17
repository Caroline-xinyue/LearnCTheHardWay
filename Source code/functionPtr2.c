#include <stdio.h>
void PrintHello(char *name)
{
  printf("Hello %s\n", name);
}
int Add(int a, int b)
{
  return a+b;
}
int main()
{
  void (*p)();
  p = PrintHello;
  p("Alice");
}