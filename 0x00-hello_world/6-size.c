#include <stdio.h>
/**
 * main - A program that prints the size of various size of computer types
 * Return 0 (success)
 */
int main(void)
{
char a;
int b;
long c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)
sizeof(a));
printf("Size of b int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of c long: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of d long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of f float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
