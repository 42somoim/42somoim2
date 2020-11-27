#include<bits/stdc++.h>

using namespace std;

void recursive_binary(int n){
	if(n == 1 || n == 0){
		cout << n;
		return;
	}
	if(n % 2 != 0){
		n -= 1;
		recursive_binary(n / -2);
		cout << 1;
	}else{
		recursive_binary(n / -2);
		cout << n % 2;
	}
}

int main(void){
	int n;

	cin >> n;
	recursive_binary(n);
}
