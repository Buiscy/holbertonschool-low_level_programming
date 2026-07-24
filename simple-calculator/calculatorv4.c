#include <stdio.h>
#include <string.h>
#include <unistd.h>
int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int div (int a, int b);
int _getinputs (int *a, int *b, int c);



int main (void)
{
	int i = 1;
	int a;
	int b;
	int c;
	c = 0;

	while (i != 0)
	{
		printf("Simple Calculator\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5)clear Result\n0) Quit\n");
		printf ("choice: ");
		scanf ("%d", &i);
		if (i == 0)
			printf("Bye!\n");

		else if (i == 1)
			{
				printf ("Addition selected:\n");

				if (_getinputs(&a, &b, c))
					printf ("Result: %d\n", add(a, b));
				c = 1;
				sleep(2);
				
			}

		else if (i == 2)
			{
				printf ("Subtraction selected:\n");

				if (_getinputs(&a, &b, c))
					printf ("Result: %d\n", sub(a, b));
				c = 1;
				sleep(2);
			}

		else if (i == 3)
			{
				printf ("Multiplication selected:\n");

				if (_getinputs(&a, &b, c))
					printf ("Result: %d\n", mul(a, b));
				c = 1;
				sleep(2);
			}

		else if (i == 4)
			{
				printf ("Division selected:\n");

				if (_getinputs(&a, &b, c))
				{
					printf ("Result: %d\n", mul(a, b));
					sleep(1);
				}
				if (a == 0 || b == 0)
					printf ("Error: division by zero\n");
				else
					printf ("Result: %d\n", div(a, b));
			}
		else if (i == 5)
			{
				printf ("Clear results selected:\n");
				a = 0;
				c = 0;
			}

		else
			printf ("Invalid Choice\n");
	}
	return (0);
}


int add (int a, int b)
{
	return (a + b);
}

int sub (int a, int b)
{
	return (a - b);
}

int mul (int a, int b)
{
	return (a * b);
}

int div (int a, int b)
{
	return (a / b);
}

int _getinputs (int *a, int *b, int c)
{
	if ( c == 0)
	{
		printf ("A: ");
		if (scanf ("%d", a) != 1)
		{
			while (getchar() != '\n');
			printf ("invalid input\n");
			sleep(1);
			return (0);
		}
	}

	printf ("B: ");
	if (scanf ("%d", b) != 1)
	{
		while (getchar() != '\n');
		printf ("invalid input\n");
		sleep(1);
		return (0);
	}

	return (1);
}
