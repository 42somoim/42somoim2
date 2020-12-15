#include<iostream>
#include<algorithm>

using namespace std;
int a[1000001];
int b[1000001];
int c[2000001];

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k, left, right;

	cin >> n >> m;
	for(int i = 0; i < n;i++)
		cin >> a[i];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	left = 0; right = 0; k = 0;
	while(left < n && right < m){
		if(a[left] <= b[right]){
			c[k] = a[left]; left++;
		}else{
			c[k] = b[right]; right++;
		}
		k++;
	}
	if(left >= n){
		for(int t = right; t < m ; t++){
			c[k++] = b[t];
		}
	}else{
		for(int t = left; t < n; t++){
			c[k++] = a[t];
		}
	}

	for(int i = 0; i < m + n ;i++)
		cout << c[i] << " ";

}
