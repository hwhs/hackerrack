#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 105

int main()
{
    int i = 4;
    double d = 4.0;
    char s[MAX_LENGTH] "HackerRank ";

    int a;
    double b;
    char input[MAX_LENGTH], des[MAX_LENGTH] = "";

    scanf("%d", &a);
    getchar();
    scanf("%lf", &b);
    getchar();
    scanf("%[^\n]", input);

    printf("%d\n", a+i);
    printf("%.1f\n", b+d);
    strcat(des, s);
    strcat(des, input);
    printf("%s\n", des);

    return 0;
}