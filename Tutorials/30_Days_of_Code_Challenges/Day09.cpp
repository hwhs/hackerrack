#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n;
    scanf("%i", &n);

    printf("%d\n", factorial(n));

    return 0;
}