#include <stdio.h>

int main(void)
{
    int num, i, j, k;
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (k = i; k < num; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}