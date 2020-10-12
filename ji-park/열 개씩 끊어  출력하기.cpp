#include <iostream>
using namespace std;

int main()
{
	char arr[1024];
	cin >> arr;
	int i = 0;
	int count = 1;
	while (arr[i] != 0)
	{
		cout << arr[i];
		if (count % 10 == 0 )
			cout << "\n";
		count++;
		i++;
	}
	return 0;
}