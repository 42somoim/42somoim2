#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<cstlib>
#include<math.h>

using namespace std;
long long fn_stoi(string ss){
	int len;
	long long num;

	len = 0;
	num = 0;
	for(char c : ss)
		len++;
	for(char c : ss)
		num += (c - '0') * pow(10, --len);
	return num;
}
int main(void){
	string num[4];
	long long ans;

	cin >> num[0] >> num[1] >> num[2] >> num[3];
	ans = fn_stoi(num[0] + num[1]) + fn_stoi(num[2] + num[3]);
	cout << ans << "\n";
}

// int main(){
// 	char num[4][8];

// 	cin >> num[0] >> num[1] >> num[2] >> num[3];
// 	cout << atoll(strcat(num[0], num[1])) + atoll(strcat(num[2], num[2]));
// }
