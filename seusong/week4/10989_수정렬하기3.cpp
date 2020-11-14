#include<algorithm>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(void){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	int v[10001];

	cin >> n;
	memset(v, 0, sizeof(v));
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		v[num]++;
	}
	for(int i = 1; i <= 10000;i++){
		while(v[i]){
			cout << i << "\n";
			v[i]--;
		}
	}
}
