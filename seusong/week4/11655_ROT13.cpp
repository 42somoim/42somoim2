#include<iostream>
#include<string>

using namespace std;

int main(void){
	string s, ans;

	getline(cin, s);
	ans = "";
	for(char c : s){
		if(c >= 'a' && c <= 'z')
			ans += ((c -'a' + 13) % 26) + 'a';
		else if(c >= 'A' && c <= 'Z')
			ans += ((c -'A' + 13) % 26) + 'A';
		else ans += c;
	}
	cout << ans << '\n';
}
