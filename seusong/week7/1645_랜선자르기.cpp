#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int wires[10001];
int main(void){
	int n, k, val;
	long long left, right, mid, sum, max_value;

	val = 0;
	cin >> k >> n;
	for(int i = 0; i < k; i++){
		cin >> wires[i];
		val = max(wires[i], val);
	}
	left = 1, right = val; max_value = 0;
	while(left <= right){
		mid = (left + right) / 2;
		sum = 0;
		for(int i = 0;i < k ; i++)
			sum += (wires[i] / mid);
		if(sum < n)
			right = mid - 1;
		else if(sum >= n){
			left = mid + 1;
			max_value = max(max_value, mid);
		}
	}
	cout << max_value;
}
