#include <iostream>
using namespace std;

int main()
{
	char a = 'a';
	char s[100];
	int i = 0;
	int  list[26] = {-1,};
	cin >> s;

	while (a <= 'z')
	{
		i = 0;
		while (s[i] != 0)
		{
			if (a == s[i])
			{
				list[a - 'a'] = i;
				break;
			}
			i++;
		}
		if (s[i] == 0)
			list[a - 'a'] = -1;
		a++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << list[i] << " ";
	}
	return (0);
}