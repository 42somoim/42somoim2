#include <stdio.h>

int main(void)
{
    int num;
    int i, j;
    scanf("%d", &num);

    for (i = num; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}