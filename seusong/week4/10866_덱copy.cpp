#include<iostream>
#include<vector>
#include<deque>
#include<string>

using namespace std;

int main(void){
	int n;
	string s, t;
	deque<int> dq;
	vector<int> ans;

	cin >> n;
	for(int i = 0; i < n ;i++){
		cin >> s;
		if(s == "push_back"){
			cin >> t;
			dq.push_back(stoi(t));
		}else if(s == "push_front"){
			cin >> t;
			dq.push_front(stoi(t));
		}
		else if(s == "front"){
			if(dq.empty()){ans.push_back(-1);continue;}
			ans.push_back(dq.front());
		}else if(s == "back"){
			if(dq.empty()){ans.push_back(-1);continue;}
			ans.push_back(dq.back());
		}else if(s == "empty"){
			ans.push_back(dq.empty());
		}else if(s == "size"){
			ans.push_back(dq.size());
		}else if(s == "pop_front"){
			if(dq.empty()){ ans.push_back(-1);continue;}
			ans.push_back(dq.front());
			dq.pop_front();
		}else if(s == "pop_back"){
			if(dq.empty()){ans.push_back(-1);continue;}
			ans.push_back(dq.back());
			dq.pop_back();
		}
	}
	for(int a : ans)
		cout << a << '\n';
}
