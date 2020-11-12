#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int n, j, k;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (j = 1; j < n - i; j++)printf(" ");
		for (k = 0; k < (i + 1) * 2; k++) {
			if (k % 2 == 0)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}