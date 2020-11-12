#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int n, t;

	cin >> n;
	t = n;
	for (int i = 0; i < n; i++) {
		for (int j = t - 1; j > 0; j--)printf(" ");
		for (int k = 0; k < (i * 2) + 1; k++)printf("*");
		printf("\n");
		t--;
	}
}