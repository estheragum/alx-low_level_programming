#include <stdio.h>

/**
* main - Prints the numbers from 00 to 99, numbers seperated by
 * a comma followed by a space, in ascending order.
 *
 * main - Entry point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */
int main(void)
{
int digit1, digit2;
int c, i;

for (digit2 = 0; digit2 <= 9; digit2++)
for (c = '0'; c <= '9'; c++)
{
for (digit2 = 0; digit2 <= 9; digit2++)
for (i = '0'; i <= '9'; i++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
if (c < i)
{
putchar(c);
putchar(i);
}
}
}
}

putchar('\n');

return (0);
}
