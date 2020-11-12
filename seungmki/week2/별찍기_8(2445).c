#include <stdio.h>

int main(void)
{
    int width, i, j, k;
    scanf("%d", &width);

    for (i = 0; i < width; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        for (k = 0; k < (width - i - 1) * 2; k++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < width - 1; i++) {
        for (j = width - 1 - i; j > 0; j--) {
            printf("*");
        }
        for (k = 0; k < (i + 1) * 2; k++) {
            printf(" ");
        }
        for (j = width - 1 - i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}