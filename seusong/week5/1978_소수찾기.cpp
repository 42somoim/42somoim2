#include<bits/stdc++.h>

using namespace std;

int main(void){
	int n, i, j, ans;
	vector<int> v;

	ans = 0;
	cin >> n;
	for(i = 0; i < n;i++){
		int num;
		cin >> num;
		for(j = 2; j < num;j++){
			if(num % j == 0)
				break;
		}
		if(j == num)
			ans++;
	}
	cout << ans;
}
