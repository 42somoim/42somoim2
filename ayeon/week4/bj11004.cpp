#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// nth_element() 사용 -> 더 빠름
// sort()가 전체를 다 정렬시킨다면 nth_element()는 부분적으로 정렬을 시키는 함수
// n번째 원소를 찾을 때 까지만 정렬함
// 주석은 sort사용

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	nth_element(arr.begin(), arr.begin()+k-1, arr.end());
	//sort(arr.begin(), arr.end());
	cout << arr[k-1] << "\n";
	return 0;
}
