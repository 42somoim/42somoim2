#include<bits/stdc++.h>

using namespace std;

map<int, int> ma;
int cnt;

int ft_repeat(int a, int p){
	int sum;

	sum = 0;
	ma[a] = ++cnt;
	while(a){
		sum = sum + pow((a % 10), p);
		a /= 10;
	}
	return sum;
}
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, p;

	cin >> a >> p;
	while(!ma[a])
		a = ft_repeat(a, p);
	cout << ma[a] - 1;
}
