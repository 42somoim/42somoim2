#include <stdio.h>

int main(void)
{
    int width, i, j;
    scanf("%d", &width);

    for (i = 0; i < width; i++) {
        for (j = 0; j < width - i - 1; j++) {
            printf(" ");
        }        
        for (j = 0; j < i * 2 + 1; j++) {
            if (j % 2 == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}