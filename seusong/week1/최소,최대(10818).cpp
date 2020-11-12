#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int n;
	int number;
	int min_num;
	int max_num;
	vector<int> num_arr;

	cin >> n;
	while (n--) {
		cin >> number;
		num_arr.push_back(number);
	}
	min_num = *min_element(num_arr.begin(), num_arr.end());
	max_num = *max_element(num_arr.begin(), num_arr.end());

	cout << min_num << " " << max_num << "\n";
}