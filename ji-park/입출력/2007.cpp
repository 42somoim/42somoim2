#include <iostream>
using namespace std;

int main()
{
	string day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30};
	int a;
	int b;
	int total= 0;
	int answer;
	cin >> a >> b;
	for (int i = 0 ; i < a ; i++)
	{
		total = total + month[i];
	}
	total = total + b;
	answer = total % 7;
	cout << day[answer];
return 0;
}