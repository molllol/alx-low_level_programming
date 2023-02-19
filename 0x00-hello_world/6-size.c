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
  printf("Size of char: %lu bytes\n", sizeof(c));
  printf("Size of int: %lu bytes\n", sizeof(i));
  printf("Size of long: %lu bytes\n", sizeof(l));
  printf("Size of double: %lu bytes\n", sizeof(d));
  printf("Size of float: %lu bytes\n", sizeof(f));
  retrun (0);
}
