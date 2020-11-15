#include<iostream>
#include<string>

using namespace std;

int main(void){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string s, o, n, cha, ans;
	int t, cur, flag;

	getline(cin, s);
	getline(cin, n);
	t = stoi(n);
	cur = 0;
	for(char c : s)
		cur++;
	flag = cur;
	for(int i = 0; i < t;i++){
		getline(cin, o);
		if(o[0] == 'P'){
			cha = o[2];
			s.insert(cur, cha);
			cur += 1;
			flag += 1;
		}
		else if(o[0] == 'L' && cur > 0)
			cur -= 1;
		else if(o[0] == 'D' && cur < flag)
			cur += 1;
		else if(o[0] == 'B' && cur > 0){
			s.erase(cur - 1, 1);
			cur -= 1;
			flag -= 1;
		}
	}
	cout << s << "\n";
}
