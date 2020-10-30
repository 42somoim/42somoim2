#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student{
	string name;
	int kor, eng, math;
};

bool cmp(const Student &a, const Student &b){
	if (a.kor != b.kor)
		return a.kor > b.kor;
	else if (a.eng != b.eng)
		return a.eng < b.eng;
	else if (a.math != b.math)
		return a.math > b.math;
	else
		return a.name < b.name;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	vector<Student> students(n);
	for (int i = 0; i<n; i++){
		cin>>students[i].name>>students[i].kor>>students[i].eng>>students[i].math;
	}
	sort(students.begin(), students.end(), cmp);
	for (int i = 0; i<n; i++)
		cout<<students[i].name<<"\n";
	return 0;
}
