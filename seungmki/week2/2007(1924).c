#include <stdio.h>

int main(void)
{
    char* week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int day = 0;
    int m, d, i;

    scanf("%d %d", &m, &d);
    i = 0;
    while (++i < m) {
        day += month[i - 1];
    }
    day += d;
    printf("%s\n", week[day % 7]);
    return 0;
}