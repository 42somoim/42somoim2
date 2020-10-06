#include <stdio.h>

int main(){
	int m, d;
	int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char dayOfWeek[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	scanf("%d %d", &m, &d);
	for (int i = 0; i < m - 1; i++){
		d += daysOfMonth[i];
	}
	printf("%s\n", dayOfWeek[d % 7]);
	return 0;
}
