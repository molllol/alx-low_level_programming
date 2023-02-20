#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char c;
  int i;
  long l;
  double d;
  float f;

  /*Size of the variables*/
  printf("Size of char: %lu byte(s)\n", sizeof(c));
  printf("Size of int: %lu byte(s)\n", sizeof(i));
  printf("Size of long: %lu byte(s)\n", sizeof(l));
  printf("Size of double: %lu byte(s)\n", sizeof(d));
  printf("Size of float: %lu byte(s)\n", sizeof(f));
  retrun (0);
}
