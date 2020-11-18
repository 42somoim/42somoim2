#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;

	cin >> n;
	for(int i = 0;i < n;i++){
		vector<int> g;
		int t;
		long long ans;

		cin >> t;
		ans = 0;
		for(int j = 0; j < t; j++){
			int num; cin >> num;
			g.push_back(num);
		}
		if(t == 1) ans = g[0];
		for(int l = 0; l < t;l++){
			for(int m = l + 1; m < t; m++){
				ans += gcd(g[l], g[m]);
			}
		}
		cout << ans << '\n';
	}
}
