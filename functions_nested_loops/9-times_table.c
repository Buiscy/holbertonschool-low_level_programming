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

				if (j == 0)
				{
				
					_putchar('0');
				}
				else
				{
					if (n < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(n + '0');
					}
					else
					{
						fd = ((n / 10) + '0');
						ld = (( n % 10) + '0'); 
						_putchar(',');
						_putchar(' ');
						_putchar(fd);
						_putchar(ld);
					}
				}
					
			}
			_putchar('\n');
		}
}
