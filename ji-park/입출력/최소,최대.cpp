#include <iostream>
using namespace std;

int main()
{
	int n;
	int m;
	int max = -1000000;
	int min =  1000000;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (max < m)
			max = m;
		if (min > m)
			min = m;
	}
	cout << min << " " << max;
}