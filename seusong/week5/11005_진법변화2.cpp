#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

char a[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
			 'A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I',
			 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(void){
	int n, b;
	vector<char> v;

	cin >> n >> b;
	while(n){
		v.push_back(a[n % b]);
		n /= b;
	}
	reverse(v.begin(), v.end());
	for(char c : v)
		cout << c;
}
