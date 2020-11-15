#include<iostream>
#include<vector>
#include<deque>
#include<string>
#include<sstream>

using namespace std;
vector<string> fn_split(string str, char deli){
	vector<string> s_group;
	stringstream ss(str);
	string temp;

	while(getline(ss, temp, deli)){
		s_group.push_back(temp);
	}
	return s_group;
}
int main(void){
	int n;
	string s, t;
	deque<int> dq;
	vector<int> ans;

	getline(cin, t);
	n = stoi(t);
	for(int i = 0; i < n ;i++){
		getline(cin, s);
		vector<string> line = fn_split(s, ' ');
		if(line.size() > 1){
			if(line[0] == "push_back")
				dq.push_back(stoi(line[1]));
			else if(line[0] == "push_front")
				dq.push_front(stoi(line[1]));
		}else{
			if(line[0] == "front"){
				if(dq.empty()){ans.push_back(-1);continue;}
				ans.push_back(dq.front());
			}else if(line[0] == "back"){
				if(dq.empty()){ans.push_back(-1);continue;}
				ans.push_back(dq.back());
			}else if(line[0] == "empty"){
				ans.push_back(dq.empty());
			}else if(line[0] == "size"){
				ans.push_back(dq.size());
			}else if(line[0] == "pop_front"){
				if(dq.empty()){ ans.push_back(-1);continue;}
				ans.push_back(dq.front());
				dq.pop_front();
			}else if(line[0] == "pop_back"){
				if(dq.empty()){ans.push_back(-1);continue;}
				ans.push_back(dq.back());
				dq.pop_back();
			}
		}
	}
	for(int a : ans)
		cout << a << '\n';
}
