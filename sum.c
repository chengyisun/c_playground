#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 0, b = 0;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("%d + %d = %d\n", a, b, a+b);

  return 0;
}
