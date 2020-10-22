#include <stdio.h>

int main(void)
{
    int high, i, j, k;
    scanf("%d", &high);

    for (i = 0; i < high; i++) {
        for (k = 0; k < high - i -1; k++) {
            printf(" ");
        }
        for (j = high - i - 1; j < high + i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}