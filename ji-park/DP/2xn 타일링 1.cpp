#include <iostream>
using namespace std;

int main()
{
	int n;
	int list[100001] = { 0 };
	cin >> n;
	list[0] = 0;
	list[1] = 1;
	list[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		list[i] = (list[i - 2] + list[i - 1] ) % 10007;
	}
	cout << list[n];
	return 0;
}
