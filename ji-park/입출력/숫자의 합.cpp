#include <iostream>
using namespace std;

int main()
{
	int n;
	int a;
	int answer = 0;
	cin >> n;
	cin >> a;
	for (int i = 0; i < n; i++)
	{
		answer = answer + a % 10;
		a = a / 10;
	}
	cout << answer << "\n";
	return (0);
}