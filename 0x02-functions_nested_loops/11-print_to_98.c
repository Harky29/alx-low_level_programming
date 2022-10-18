#include <stdio.h>

/**
 * main- serves as entry point.
 * code to print numbers from 0 - 98.
 * Return: Always 0 (success).
 */
int main(void)
{
        int i;

        for (i = 0; i <= 98; i++)
        {
                printf("%d", i);
                if (i != 98)
                {                                                       putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}
