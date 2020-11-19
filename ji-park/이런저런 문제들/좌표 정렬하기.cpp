#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool compare(pair<int, int >p1, pair<int, int >p2)
{
	if (p1.first == p2.first)
		return (p1.second < p2.second);
	return(p1.first < p2.first);
}

int main()
{
	int n;
	int x, y;
	vector<pair<int, int>>p;
	
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> x >> y;
		p.push_back({ x,y });
	}
	sort(p.begin(), p.end(), compare);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", p[i].first, p[i].second);
	}
	return (0);
}