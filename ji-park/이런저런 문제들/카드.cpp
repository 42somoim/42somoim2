#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	int index,max,count;
	cin >> n;
	long long array[1000000];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	sort(array, array + n);
	count = 1;
	max = 0;
	index = 0;
	for (int i = 0; i < n -1; i++)
	{
		if (array[i] == array[i + 1])
		{
			count++;
			if (count > max)
			{
				index = i;
				max = count;
			}
		}
		else
		{
			count = 1;
		}		 
	}
	cout << array[index] << '\n';
	return(0);
}