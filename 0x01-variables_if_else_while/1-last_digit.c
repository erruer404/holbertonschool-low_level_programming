#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print size of different data type
* Return: Always 0 (Success)
**/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        printf("Last digit of ");
	printf("%i", n);
	n = n %10;
	printf(" is ");
	printf("%i", n);

        if (n > 5)
        {
        printf(" is greater than 5\n");
	}
	if (n == 0)
        {
        printf(" and is 0");
        }
        if (n > 6 && n != 0)
        {
        printf("and is less than 6 and not 0\n");
        }
        return (0);
}
 
