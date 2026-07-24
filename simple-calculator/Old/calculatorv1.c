#include <stdio.h>
#include <string.h>
int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int div (int a, int b);


int main (void)
{
    int i = 1;
    printf("Simple Calculator\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
    while (i != 0)
    {
        printf ("choice: ");
        scanf ("%d", &i);
        if (i == 0)
            printf("Bye!\n");

        else if (i == 1)
            {
                int a;
                int b;
                printf ("A: ");
                scanf ("%d", &a);
                printf ("B: ");
                scanf ("%d", &b);
                printf ("Result: %d\n", add(a, b));
            }

        else if (i == 2)
            {
                int a;
                int b;
                printf ("A: ");
                scanf ("%d", &a);
                printf ("B: ");
                scanf ("%d", &b);
                printf ("Result: %d\n", sub(a, b));
            }

        else if (i == 3)
            {
                int a;
                int b;
                printf ("A: ");
                scanf ("%d", &a);
                printf ("B: ");
                scanf ("%d", &b);
                printf ("Result: %d\n", mul(a, b));
            }

        else if (i == 4)
            {
                int a;
                int b;
                printf ("A: ");
                scanf ("%d", &a);
                printf ("B: ");
                scanf ("%d", &b);
                if (a == 0 || b == 0)
                    printf ("Error: division by zero\n");
                else
                    printf ("Result: %d\n", div(a, b));
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