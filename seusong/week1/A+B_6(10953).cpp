#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int n;
	string str;

	cin >> n;
	while (n--)
	{
		cin >> str;
		cout << str[0] - '0' + str[2] - '0' << "\n";
	}
}