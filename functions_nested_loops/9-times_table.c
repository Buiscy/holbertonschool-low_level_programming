#include "main.h"

void times_table(void)
{
	int i, j, n, fd, ld;
		/* fd is first digit, ld is last digit
		 * i is for colums, j for rows
		 * n is for the number
		 */
	
		for (i = 0; i <=9; i++)
		{
			for(j = 0; j <=9; j++)
			{
				n = i * j;
				fd = ((n / 10) + '0');
				ld = ((n % 10) + '0');

				if (n < 10)
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
					_putchar (' ');
				}
				else if(n >= 10)
				{
					_putchar(fd);
					_putchar(ld);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
					
			}
			_putchar('\n');
		}
}
