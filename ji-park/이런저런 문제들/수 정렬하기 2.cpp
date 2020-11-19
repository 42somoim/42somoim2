#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n ;
	int* array;

	cin >> n;
	array  = new int[n];

	for (int i = 0; i < n; i++)
	{
		 cin >> array[i];
	}
	sort(array, &array[n]);

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\n" ;
	}

	return (0);
}