#include <stdio.h>
/*
*remember, z is considered higher then a, so to reverse its -- and greater
*/
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		{
			putchar(rev);
		}
	putchar('\n');
	return (0);
}
