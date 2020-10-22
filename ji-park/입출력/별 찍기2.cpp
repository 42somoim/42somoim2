#include <iostream>
using namespace std;

int main()
{
	int i;
	int j;
	int n;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = n -1; j >= 0; j--)
		{
			if (j > i)
				cout << ' ';
			else 
				cout << '*';
		}
		cout << "\n";
	}
}