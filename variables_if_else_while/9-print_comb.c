#include <stdio.h>

int main(void)
{
	int raise;

	for (raise = '0' ; raise <= '9' ; raise++)
	{
		putchar(raise);
	if (raise != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return(0);
}
