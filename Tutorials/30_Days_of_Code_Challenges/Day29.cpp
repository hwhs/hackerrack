#include <stdio.h>

int main()
{
    int t, n, k;

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);

        if (((k-1 | k) > n) && (k%2 == 0)) {
            printf("%d\n", k-2);
        }
        else {
            printf("%d\n", k-1);
        }
    }

    return 0;
}