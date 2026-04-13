#include <stdio.h>

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf ("fizz");
			putchar(32);
		}
		else
		{
			printf("%d", i);
			putchar(32);
		}
	
	}
	putchar(10);
	return (0);
}
