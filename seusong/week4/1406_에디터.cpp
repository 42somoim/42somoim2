#include<iostream>
#include<string>
#include<list>

using namespace std;

int main(void){
	//cin.tie(NULL);
	//ios::sync_with_stdio(false);
	string s, ans;
	char op, cha;
	int n;
	list<char> l;

	cin >> s >> n;
	for(char c : s)
		l.push_back(c);
	auto iter = l.end();
	for(int i = 0; i < n;i++){
		cin >> op;
		if(op == 'P'){
			cin >> cha; l.insert(iter, cha);
		}
		else if(op== 'L' && iter != l.begin())
			iter--;
		else if(op== 'D' && iter != l.end())
			iter++;
		else if(op== 'B' && iter != l.begin()){
			iter--;
			iter = l.erase(iter);
		}
	}
	for(iter = l.begin(); iter != l.end();iter++)
		cout << *iter;
	cout << "\n";
}
