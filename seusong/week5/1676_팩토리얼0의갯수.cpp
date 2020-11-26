#include<bits/stdc++.h>

using namespace std;

int main(void){
	int n, two, five, val;

	two = 0; five = 0;
	cin >> n;
	for(int i = 2 ; i <= n;i++){
		val = i;
		while(val % 2 == 0){
			two++; val /= 2;
		}
		while(val % 5 == 0){
			five++; val /= 5;
		}
	}
	cout << min(two, five);
}
