#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int x, i;
	int A, B, C, D;
	scanf("%d %d", &A, &B);
	D = 0;
	for (i = 0; i <= A; i++) {

		if (i == 2 || i == 4 || i == 6 || i == 8 || i == 9 || i == 11 || i == 13) {
			C = 31;
		}
		else if (i == 3) {
			C = 28;
		}
		else if (i == 5 || i == 7 || i == 10 || i == 12) {
			C = 30;
		}
		else
			C = 0;

		D += C;
		C = 0;
	}
	x = B + D;
	if (x % 7 == 1) {
		printf("MON");
	}
	else if (x % 7 == 2) {
		printf("TUE");
	}
	else if (x % 7 == 3) {
		printf("WED");
	}
	else if (x % 7 == 4) {
		printf("THU");
	}
	else if (x % 7 == 5) {
		printf("FRI");
	}
	else if (x % 7 == 6) {
		printf("SAT");
	}
	else if (x % 7 == 0) {
		printf("SUN");
	}
}