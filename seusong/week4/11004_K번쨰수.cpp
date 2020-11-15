#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> v;

int main(void){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, k;

	cin >> n >> k;
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	cout << v[k - 1] << "\n";
}
