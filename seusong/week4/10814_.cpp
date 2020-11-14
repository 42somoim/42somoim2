#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

bool compare(pair<int, string>a, pair<int, string>b) {
	if (a.first == b.first) {
		return false;
	}
	else {
		return a.first < b.first;
	}
}
int main(void){
	int n;
	pair<int, string> p;
	vector<pair<int, string>> group;

	cin >> n;
	for(int i = 0; i < n; i++){
		int age; string name;
		cin >> age >> name;
		p.first = age; p.second = name;
		group.push_back(p);
	}
	stable_sort(group.begin(), group.end(), compare);
	for(pair<int, string> p1 : group)
		cout << p1.first << " " << p1.second << "\n";
}