#include <iostream>
#include <algorithm>
#include <utility> 
#include <vector>
#include <tuple>
using namespace std;

bool compare(tuple <int, string, int>t1, tuple <int, string, int>t2)
{
	if (get<0>(t1) == get<0>(t2))
	{
		return (get<2>(t1) < get<2>(t2));
	}
	return (get<0>(t1) < get<0>(t2));
}

int main()
{
	int n;
	int age;
	string name;
	vector <tuple <int, string, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		v.push_back(make_tuple(age,name,i));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << get<0>(v[i]) << " " << get<1>(v[i]) << "\n";
	}
	return (0);
}