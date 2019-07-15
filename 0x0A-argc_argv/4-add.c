#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Sums numbers
*@argc: Argument counter
*@argv: Argument vector
* Return: return sum of integer arguments
*/

int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc == 1)
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
