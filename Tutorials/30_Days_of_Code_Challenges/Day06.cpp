#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char s[10240];

    scanf("%d", &T);
    //printf("T[%d]\n", T);

    for (int i = 0; i < T; i++) {
        scanf("%s", s);
        //printf("[%s]\n", s);

        int index, len;
        len = strlen(s);

        index = 0;
        while (index < len) {
            printf("%c", s[index]);
            index += 2;
        }
        printf(" ");

        index = 1;
        while (index < len) {
            printf("%c", s[index]);
            index += 2;
        }
        printf("\n");
    }

    return 0;
}