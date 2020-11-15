#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

string s;

int main(void){
	int len;
	vector<string> sgroup;

	cin >> s;
	len = 0;
	for(char c : s)
		len++;
	for(int i = 0;i < len;i++)
		sgroup.push_back(s.substr(i));
	sort(sgroup.begin(), sgroup.end());
	for(string ss : sgroup)
		cout << ss << '\n';
}
