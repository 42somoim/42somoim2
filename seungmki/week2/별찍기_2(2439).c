#include <stdio.h>

int main(void)
{
    int num;
    int i, j, k;
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 0; j < num - i - 1; j++) {
            printf(" ");
        }
        for (k = j; k < num; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}