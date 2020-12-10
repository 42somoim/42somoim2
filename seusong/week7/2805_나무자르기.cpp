#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int trees[1000001];
int main(void){
	int n, m, bigTree;
	int left, right;
	long long sum, ans, mid;

	cin >> n >> m;
	bigTree = 0;
	for(int i = 0; i < n; i++){
		cin >> trees[i];
		bigTree = max(trees[i], bigTree);
	}
	left = 1; right = bigTree;ans = 0;
	while(left <= right){
		mid = (left + right) / 2;
		sum = 0;
		for(int i = 0;i < n; i++){
			if(trees[i] - mid > 0)
				sum += (trees[i] - mid);
		}
		if(sum >= m){
			left = mid + 1;
			ans = max(ans, mid);
		}else if(sum < m)
			right = mid - 1;
	}
	cout << ans;
}
