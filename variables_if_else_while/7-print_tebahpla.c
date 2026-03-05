#include <stdio.h>
int main(void)
{
	char rev;

	for( rev ='z'; rev >= 'a'; rev--)
		/* remember, z is considered higher then a, so to reverse its -- and greater
		 */
		{
			putchar(rev);
		}
	putchar('\n');
	return(0);
}
