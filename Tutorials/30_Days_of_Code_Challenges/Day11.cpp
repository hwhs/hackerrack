#include <stdio.h>
#include <stdlib.h>

#define LEN 6

int main()
{
    int arr[LEN][LEN];

    for (int i = 0; i < LEN; i++)
        for (int j = 0; j < LEN; j++)
            scanf("%d", &arr[i][j]);

#if 0
    for (int i = 0; i < LEN; i++)
        for (int j = 0; j < LEN; j++)
            printf("%d%c", arr[i][j], ((j+1)==LEN)? '\n': ' ');
#endif

    int max, sum;

    max = sum = 0;
    for (int i = 0; (i+2) < LEN; i++) {
        for (int j = 0; (j+2) < LEN; j++) {
            sum = arr[i][j]
                +arr[i][j+1]
                +arr[i][j+2]
                +arr[i+1][j+1]
                +arr[i+2][j]
                +arr[i+2][j+1]
                +arr[i+2][j+2];
            if ((sum > max) || (i==0 && j==0))
                max = sum;
        }
    }
    printf("%d\n", max);

    return 0;
}
