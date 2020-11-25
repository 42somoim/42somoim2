#include<bits/stdc++.h>

using namespace std;

bool getPrime(int n){
	if(n == 1)
		return false;
	for(int i = 2; i <= sqrt(n);i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main(void){
	int n, a, b;

	while(cin >> n){
		if(n == 0) break;
		for(int i = 2; i <= (n / 2); i++){
			if(getPrime(i)){
				if(getPrime(n-i)){
					a = i; b = n - i;
					break;
				}
			}
		}
		cout << n << " = " << a << " + " << b << "\n";
	}

}
