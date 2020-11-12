#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin>>n;
	vector<pair<int, int> > num(n);
	for (int i = 0; i<n; i++)
		cin >> num[i].first >> num[i].second;
	sort(num.begin(), num.end());
	for (int i = 0; i<n; i++)
		cout << num[i].first << " " << num[i].second << "\n";
	return 0;
}
