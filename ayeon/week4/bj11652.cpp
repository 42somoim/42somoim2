#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	long long arr[100001], ans;
	int n, cnt = 1, max = 1;
	cin>>n;
	for (int i = 0; i < n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	ans = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i-1] == arr[i]){
			cnt++;
			if (max < cnt){
				max = cnt;
				ans = arr[i];
			}
		}
		else	cnt = 1;
	}
	cout<<ans<<"\n";
	return 0;
}
