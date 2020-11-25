#include<bits/stdc++.h>

using namespace std;

bool getPrime(int n){
	for(int i = 2; i <= sqrt(n);i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main(void){
	int a, b;
	vector<int> ans;

	cin >> a >> b;
	for(int i = a; i <=b;i++){
		if(i == 1)
			continue;
		if(getPrime(i))
			ans.push_back(i);
	}
	for(int res : ans)
		cout << res << '\n';
}
