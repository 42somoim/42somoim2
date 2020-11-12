#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// stdlib.h의 atoll을 이용한 풀이 -> 이게 더 메모리 적게듬
// atoll은 문자열을 long long으로 바꿔주는 함수

int main(){
	char a[20], b[10], c[20], d[10];
	scanf("%s %s %s %s", a, b, c, d);
	printf("%lld\n", atoll(strcat(a, b)) + atoll(strcat(c, d)));
	return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// stoll을 이용한 풀이
// stoll은 string을 long long으로 바꿔주는 함수

// int main(){
// 	ios::sync_with_stdio(false); cin.tie(NULL);
// 	int a, b, c, d;
// 	string str1, str2;
// 	cin >> a >> b >> c >> d;
// 	str1 = to_string(a) + to_string(b);
// 	str2 = to_string(c) + to_string(d);
// 	cout << stoll(str1) + stoll(str2) << "\n";
// 	return 0;
// }
