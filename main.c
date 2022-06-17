#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial (int x);
    int number, result;

    printf("Give am integer number:");
    scanf("%i", &number);

    result = factorial(number);

    printf("The Factorial is: %i",result);
    return 0;
}
int factorial(int x)
{
    int result;

    if(x==0)
    {
        result = 1;

    }
    else
    {
        result = x * factorial(x - 1);
    }

    return result;
}
