#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// sort()에 비교함수를 커스텀해 비교한 풀이
// 주석된 코드는 first와 second를 뒤집어 입력받아 비교함수를 커스텀하지 않아도 되는 풀이

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	vector<pair<int, int> > num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i].first >> num[i].second;
		//cin >> num[i].second >> num[i].first;
	sort(num.begin(), num.end(), cmp);
	//sort(num.begin(), num.end());
	for (int i = 0; i < n; i++)
		cout << num[i].first << " " << num[i].second << "\n";
		//cout << num[i].second << " " << num[i].first << "\n";
	return 0;
}
