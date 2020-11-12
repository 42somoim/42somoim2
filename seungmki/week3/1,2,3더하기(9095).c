#include <stdio.h>

void make_n(int sum, int max, int* answer)
{
    if (sum == max) {
        (*answer)++;
        return;
    } else if (sum < max) {
        make_n(sum + 1, max, answer);
        make_n(sum + 2, max, answer);
        make_n(sum + 3, max, answer);
    }
}

int main(void)
{
    int t, n, i, answer;
    scanf("%d", &t);

    for (i = 0; i < t; ++i) {
        scanf("%d", &n);
        answer = 0;
        make_n(0, n, &answer);
        printf("%d\n", answer);
    }
    return 0;
}
