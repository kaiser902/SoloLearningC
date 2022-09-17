#include <stdio.h>
int main()
{
  char city[40];
  printf("Enter your favorite city: ");
  gets(city);
  // Note: for safety, use
  // fgets(city, 40, stdin);

  puts(city);

  return 0;
}
