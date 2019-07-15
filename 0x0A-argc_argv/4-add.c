#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Mulitplies two numbers
*@argc: Argument counter
*@argv: Argument vector
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1 ; i < argc ; i++)
{
if (isdigit(*argv[i]) && atoi(argv[i]) != 0)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
