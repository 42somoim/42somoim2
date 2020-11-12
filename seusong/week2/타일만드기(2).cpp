//#include<iostream>
//
//using namespace std;
//
//int main(void) {
//	int arr[1001];
//	int	n;
//
//	cin >> n;
//	arr[1] = 1;
//	arr[2] = 3;
//	for (int i = 3; i <= n; i++) {
//		arr[i] = (2 * arr[i - 1] + arr[i - 2]) % 10007;
//	}
//	cout << arr[n] << "\n";
//}