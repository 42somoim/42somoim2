#include <stdio.h>
// 재귀 이용
void sol(int n){
	if (n == 0)	return;
	if (n % 2 == 0){
		sol(n/-2);
		printf("0");
	}
	else{
		if (n < 0)
			sol((n/-2)+1);
		else
			sol(n/-2);
		printf("1");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	if (n == 0)	printf("0\n");
	else	sol(n);
	return 0;
}


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
// 	ios::sync_with_stdio(false); cin.tie(NULL);
// 	int n;
// 	cin >> n;
// 	string s;
// 	while (n != 0){
// 		if (n % -2 == 0){
// 			s += "0";
// 		}
// 		else
// 			s += "1";
// 		if (n < 0 && (n % -2 != 0))	n = (n / -2) + 1;
// 		else	n /= -2;
// 	}
// 	if (s.size() == 0)	cout << "0\n";
// 	else{
// 		reverse(s.begin(), s.end());
// 		cout << s << "\n";
// 	}
// 	return 0;
// }
