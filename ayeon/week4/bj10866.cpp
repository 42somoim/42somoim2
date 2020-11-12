#include <iostream>
#include <deque>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	deque<int> d;
	string str;
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str;
		if (str == "push_front"){
			cin >> num;
			d.push_front(num);
		}
		else if (str == "push_back"){
			cin >> num;
			d.push_back(num);
		}
		else if (str == "pop_front"){
			if (!d.empty()){
				cout << d.front() << "\n";
				d.pop_front();
			}else	cout << "-1\n";
		}
		else if (str == "pop_back"){
			if (!d.empty()){
				cout << d.back() << "\n";
				d.pop_back();
			}else	cout << "-1\n";
		}
		else if (str == "size")
			cout << d.size() << "\n";
		else if (str == "empty"){
			if (d.empty())	cout << "1\n";
			else	cout << "0\n";
		}
		else if (str == "front"){
			if (!d.empty())
				cout << d.front() << "\n";
			else	cout << "-1\n";
		}
		else if (str == "back"){
			if (!d.empty())
				cout << d.back() << "\n";
			else	cout << "-1\n";
		}
	}
	return 0;
}
