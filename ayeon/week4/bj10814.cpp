#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// stable_sort()를 이용한 풀이
// 주석 부분은 sort를 하지 않고 푸는 풀이 -> 이게 더 빠름

bool cmp(const pair<int, string> &a, const pair<int, string> &b){
	return a.first < b.first;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	vector<pair<int, string> > member(n);
	for (int i = 0; i<n; i++)
		cin>>member[i].first>>member[i].second;
	stable_sort(member.begin(), member.end(), cmp);
	for (int i = 0; i<n; i++)
		cout << member[i].first << " " << member[i].second << "\n";
	// vector<vector<string> > member(201);
	// int age; string name;
	// for (int i = 0; i<n; i++){
	// 	cin>>age>>name;
	// 	member[age].push_back(name);
	// }
	// for (int i = 1; i<201; i++){
	// 	for (int j = 0; j<member[i].size(); j++)
	// 		cout<<i<<" "<<member[i][j]<<"\n";
	// }
	return 0;
}
