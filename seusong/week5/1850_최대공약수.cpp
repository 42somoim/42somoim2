#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

long long gcd(long long a, long long b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void){
	long long a, b, t;

	cin >> a >> b;
	t = gcd(a, b);
	for(int i = 0; i < t; i++)
		cout << '1';
}
