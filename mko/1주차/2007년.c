#include<stdio.h>
int main() {
	int month, day, sum = 0 ;
	scanf("%d %d", &month, &day);
	sum += day;
	month--;
	while (month != 0) {
		if (month == 1) {
			sum += 31;
		}
		else if (month == 4  || month == 6 || month == 9 || month == 11) {
			sum += 30;
		}
		else if (month == 2) {
			sum += 28;
		}
		else
			sum += 31;
		month--;
	}
	switch (sum % 7) {
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	}
}

