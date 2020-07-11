#include <stdio.h>

#define MAX_LENGTH 105

int main()
{
    char input_string[MAX_LENGTH];

    scanf("%[^\n]", input_string);
    printf("Hello, World.\n");
    printf("%s\n", input_string);

    return 0;
}
