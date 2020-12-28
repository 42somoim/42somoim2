#include <iostream>
using namespace std;

int arr[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, S, sum, low = 0, high = 0, result = 2e9;
	
	cin >> N >> S;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sum = arr[0];
	while (low <= high && high < N)
	{
		if (sum < S)
			sum += arr[++high];
		else if (sum == S)
		{
			result = min(result, (high - low + 1));
			sum += arr[++high];
		}
		else if (sum > S)
		{
			result = min(result, (high - low + 1));
			sum -= arr[low++];
		}
	}
	if (result == 2e9)
		cout << "0\n";
	else
		cout << result << "\n";
	return (0);
}