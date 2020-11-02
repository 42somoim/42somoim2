#include<iostream>

using namespace std;

int main(void) {
	int n;
	int arr[1001];
	int ldp[1001];
	int rdp[1001];
	int max_value, ans;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		max_value = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && max_value < ldp[j])
				max_value = ldp[j];
		}
		ldp[i] = max_value + 1;
	}
	for (int i = n - 1; i >= 0; i--) {
		max_value = 0;
		for (int j = n - 1; j > i; j--) {
			if (arr[i] > arr[j] && max_value < rdp[j])
				max_value = rdp[j];
		}
		rdp[i] = max_value + 1;
	}
	ans = 0;
	max_value = 0;
	for (int i = 0; i < n; i++) {
		ans = ldp[i] + rdp[i];
		if ((rdp[i] != 0 && ldp[i] != 0) && max_value < ans){
			max_value = ans; cout << i << " ";
	}
	}
	cout << max_value - 1 << "\n";
}
