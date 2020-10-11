#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int n, t, j, k;

	cin >> n;
	t = n;
	for (int i = 1; i <= n; i++) {
		for (j = 0; j < i; j++)printf("*"); for (k = 0; k < n - i; k++)printf(" ");
		for (j = 0; j < n - i; j++)printf(" "); for (k = 0; k < i; k++)printf("*");
		printf("\n");
	}
	for (int i = 1; i <= n; i++) {
		for (k = 0; k < n - i; k++)printf("*"); for (j = 0; j < i; j++)printf(" ");
		for (k = 0; k < i; k++)printf(" "); for (j = 0; j < n - i; j++)printf("*");
		printf("\n");
	}
}