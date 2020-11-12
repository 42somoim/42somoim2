#include <stdio.h>
#define underTen(x)		(((x)<10)?((x)+'0'):((x-10)+'A'))
// 재귀 이용
void sol(int n, int b){
	if (n < b){
		printf("%c", underTen(n));
		return;
	}
	sol(n/b, b);
	printf("%c", underTen(n%b));
	return;
}

int main(){
	int n, b;
	scanf("%d %d", &n, &b);
	sol(n, b);
}

// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// string reverse 함수 이용
//
// int main(){
// 	ios::sync_with_stdio(false); cin.tie(NULL);
// 	int n, b;
// 	cin >> n >> b;
// 	string str;
// 	while (n != 0){
// 		int r = n % b;
// 		n /= b;
// 		if (r < 10)
// 			str += (r + '0');
// 		else
// 			str += (r - 10 + 'A');
// 	}
// 	reverse(str.begin(), str.end());
// 	cout << str << "\n";
// 	return 0;
// }
