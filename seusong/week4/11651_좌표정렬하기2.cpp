#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main(void) {
	int n, x, y;
	vector<pair<int, int>> p;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		p.push_back({ x, y });
	}
	sort(p.begin(), p.end(), comp);
	for (int i = 0; i < n; i++)
		cout << p[i].first << " " << p[i].second << "\n";

}
