#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, c;
vector<int> iptimes;

int main(void){
	int share, left, right, mid, install, max_value;

	cin >> n >> c;
	for(int i = 0; i < n;i++){
		cin >> share;
		iptimes.push_back(share);
	}
	sort(iptimes.begin(), iptimes.end());
	left = 1, right = iptimes[n - 1] - iptimes[0];
	 max_value = 0;
	while(left <= right){
		mid = (left + right) / 2;
		int rev = iptimes[0];
		install = 1;
		for(int i = 1; i < n;i++){
			if(iptimes[i] - rev >= mid){
				install++;
				rev = iptimes[i];
			}
		}
		if(install >= c){
			max_value = max(max_value, mid);
			left = mid + 1;
		}
		else right = mid - 1;
	}
	cout << max_value;
}
