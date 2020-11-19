#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	char a[100];
	cin >> a;
	while (a[i] != 0)
	{
		i++;
	}
	cout << i;
	return(0);
}