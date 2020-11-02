#include <iostream>
#include <queue>
using namespace std;

// queue 라이브러리를 이용한 풀이

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	queue<int> q;
	string str;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str;
		if (str == "push"){
			int num;
			cin >> num;
			q.push(num);
		}
		else if (str == "pop"){
			if (q.size() != 0){
				cout << q.front() << "\n";
				q.pop();
			}else	cout << "-1\n";
		}
		else if (str == "size")
			cout << q.size() << "\n";
		else if (str == "empty"){
			if (q.empty())	cout << "1\n";
			else cout << "0\n";
		}
		else if (str == "front"){
			if (q.size() != 0)	cout << q.front() << "\n";
			else	cout << "-1\n";
		}
		else if (str == "back"){
			if (q.size() != 0)	cout << q.back() << "\n";
			else	cout << "-1\n";
		}
	}
	return 0;
}
