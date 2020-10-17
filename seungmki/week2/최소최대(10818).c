#include <stdio.h>

int main(void)
{
    int num;
    int i = 0, max = -1000000, min = 1000000;
    int len;
    scanf("%d", &len);

    while (i < len) {
        scanf("%d", &num);
        getchar();/*without this function, program works fine*/
        max = max < num ? num : max;
        min = min > num ? num : min;
        i++;
    }
    printf("%d %d", min, max);
    return 0;
}