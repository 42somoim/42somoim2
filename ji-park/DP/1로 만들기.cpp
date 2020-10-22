#include <iostream>
using namespace std;

int min(int a, int b)
{
	return (a > b ? b : a);
}

int main()
{
	int n;
	int list[100001];
	cin >> n;
	list[0] = 0;
	list[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		list[i] = list[i - 1] + 1;
		if (i % 2 == 0)
			list[i] = min(list[i / 2] + 1 , list[i]);
		if (i % 3 == 0)
			list[i] = min(list[i / 3] + 1, list[i]);
	}
	cout << list[n];

	return (0);
}