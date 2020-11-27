#include<bits/stdc++.h>

using namespace std;

void convertDecToB(int n, int base){
	if(n == 0)
		return;
	convertDecToB(n / base, base);
	cout << n % base << " ";
}
int main(void){
	int a, b, len, val, num;

	cin >> a >> b >> len;
	num = 0;
	for(int i = 0; i < len; i++){
		cin >> val; num = num * a + val;
	}
	convertDecToB(num, b);
}
