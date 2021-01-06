#include<stdio.h>

int main()
{
  int a = 545;
  char c = 'x';
  float f = 1.23;
  double d = 888.888;
  long l = 145;
  short s = 17;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  // print value and size of a char variable
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));

  // print value and size of a float variable
  printf("float f value: %f and size: %lu bytes\n", f, sizeof(f));

  // print value and size of a double variable
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));

  // print value and size of a long variable
  printf("long l value: %ld and size: %lu bytes\n", l, sizeof(l));

  // print value and size of a short varible
  printf("short s value: %d and size: %lu bytes\n", s, sizeof(s));
}

