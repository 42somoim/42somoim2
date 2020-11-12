#include <iostream>
#include <stack>
using namespace std;

// stack을 이용한 풀이
// 주석 코드는 stack을 이용하지 않고 푼 풀이 -> 메모리 더 적게 듬

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t, check;
	cin >> t;
	for (int i = 0; i < t; i++){
		check = 0;
		stack<char> s;
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++){
			if (str[j] == '('){
				s.push(str[j]);
			}else{
				if (!s.empty())	s.pop();
				else{
					check = 1;
					break;
				}
			}
		}
		if (!s.empty() || check)	cout << "NO\n";
		else	cout << "YES\n";
	}
	return 0;
}

// #include <stdio.h>
// int main(){
// 	int t, check;
// 	char str[51];
// 	scanf("%d", &t);
// 	for (int i = 0; i < t; i++){
// 		check = 0;
// 		scanf("%s", str);
// 		for (int j = 0; str[j]; j++){
// 			if (str[j] == '(')	check++;
// 			else{
// 				if (check)	check--;
// 				else{
// 					check = -1;
// 					break;
// 				}
// 			}
// 		}
// 		if (check != 0)	printf("NO\n");
// 		else	printf("YES\n");
// 	}
// 	return 0;
// }
