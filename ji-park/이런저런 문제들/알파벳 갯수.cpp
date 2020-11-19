#include <iostream>
using namespace std;

int main()
{
	char str[100];
	char a;
	int i = 0;
	int n[26] = { 0 };
	
	cin >> str;
	while (str[i] != 0)
	{
		a = str[i] - 'a';
		n[a]++;
		i++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << n[i] << " ";
	}
	return(0);
}