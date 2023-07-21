#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;
    while (1) // This loop will run indefinitely since the condition is always true (1).
    {
        putchar(i);
        i++; // Increment the value of i to prevent an infinite loop that prints the same character repeatedly.
    }
    printf("Infinite loop avoided! \\o/\n");
    return (0);
}
