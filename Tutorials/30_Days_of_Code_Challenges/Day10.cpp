#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count, max_count;
    scanf("%i", &n);
    //printf("%d\n", n);

    count = 0;
    max_count = 0;
    while (n > 0) {
        if (n&1)
            count += 1;
        else
            count = 0;
        n = n >> 1;
        if (count > max_count)
            max_count = count;
    }
    printf("%d\n", max_count);

    return 0;
}