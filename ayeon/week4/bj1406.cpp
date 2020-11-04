#include <iostream>
#include <stack>
using namespace std;

// stack을 이용한 풀이

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	stack<char> left, right;
	int n;
	string str;
	cin >> str;
	cin >> n;
	for (auto ch : str)
		left.push(ch);
	while (n--){
		char c, s;
		cin >> c;
		if (c == 'P'){
			cin >> s;
			left.push(s);
		}
		else if (c == 'L'){
			if (!left.empty()){
				s = left.top();
				left.pop();
				right.push(s);
			}
		}
		else if (c == 'D'){
			if (!right.empty()){
				s = right.top();
				right.pop();
				left.push(s);
			}
		}
		else if (c == 'B'){
			if (!left.empty())
				left.pop();
		}
	}
	while (!left.empty()){
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()){
		cout << right.top();
		right.pop();
	}
	return 0;
}
