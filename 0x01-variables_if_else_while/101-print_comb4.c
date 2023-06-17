#include <stdio.h>

int main(void)
{
    int digit1;
    int digit2;
    int digit3 = 0;

    while (digit3 < 10)
    {
        digit2 = 0;
        while (digit2 < 10)
        {
            digit1 = 0;
            while (digit1 < 10)
            {
                if (digit1 != digit2 && digit2 != digit3 && digit3 != digit1)
                {
                    if (digit1 + digit2 + digit3 != 9 + 8 + 7)
                    {
                        putchar(digit3 + '0');
                        putchar(digit2 + '0');
                        putchar(digit1 + '0');

                        if (!(digit3 == 9 && digit2 == 8 && digit1 == 7))
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                }

                digit1++;
            }

            digit2++;
        }

        digit3++;
    }

    putchar('\n');
    return 0;
}
