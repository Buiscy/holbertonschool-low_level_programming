#include "main.h"

int length (char *s);

void puts_half(char *str)
{
	int i;
	i = length(str);

	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

int length (char *s)
{
	int b = 0;
	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
