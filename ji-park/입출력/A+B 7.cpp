#include <iostream>
using namespace std;

int main()
{
	int t;
	int a;
	int b;
	cin >> t;
	for (int i =1; i<= t; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << "\n";
	}
	return (0);
}