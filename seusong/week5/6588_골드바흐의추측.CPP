#include<bits/stdc++.h>

using namespace std;

int prime[1000001];
void getPrime(int n){
	prime[0] = 1;prime[1] = 1;
	for(int i = 2; i <= n;i++){
		if(prime[i]) continue;
		for(int j = i * 2;j <= n; j += i){
			prime[j] = 1;
		}
	}
}

int main(void){
	int n, a, b;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	getPrime(1000000);
	while(cin >> n){
		if(n == 0) break;
		for(int i = 2; i <= (n / 2); i++){
			if(prime[i] == 0 && prime[n - i] == 0){
				a = i; b = n - i; break;
			}
		}
		cout << n << " = " << a << " + " << b << "\n";
	}

}
