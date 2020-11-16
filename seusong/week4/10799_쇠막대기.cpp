#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(void){
	string s;
	stack<char> st;
	int flag, ans;

	cin >> s;
	flag = 0;ans = 0;
	for(char c : s){
		if(c == ')' && flag == 1){
			st.pop(); ans += st.size(); flag = 0;
		}else if(c == '('){
			st.push(c); flag = 1;
		}else if(c == ')' && flag == 0){
			st.pop(); ans += 1;
		}
	}
	cout << ans << '\n';
}
