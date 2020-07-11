#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double meal_cost;
    int tip_percent, tax_percent;
    int total;

    scanf("%lf", &meal_cost);
    scanf("%i", &tip_percent);
    scanf("%i", &tax_percent);

    total = round(meal_cost * (1 + tip_percent/100.0 + tax_percent/100.0));
    printf("The total meal cost is %d dollars.\n", total);

    return 0;
}