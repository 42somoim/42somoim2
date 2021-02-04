/*
������_�׸���

���� 2�� �̻� ���� �� ���� ���� �� �� �� ������
	���� 1�� ���� ���� �� 0�� ������ 0�� ������
��� 2�� �� ������

if(a == ����, b == ����)
	������
else if(a == ����, b == 0)
	������
else if(a == 0, b == ���)

else if(a == ���, b == ���)
	������

������ ��� ó�� ���� => ������ ũ�Ⱑ 10000���� ����
������ ���� ����, minus[] = ��������
����� ���� ����, plus[] = ��������
 ���� �������.


*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num, zero;
	long long sum;
	vector<int> minus;
	vector<int> plus;

	cin >> n;
	zero = 0; sum = 0;
	for(int i = 0; i < n ;i++){
		cin >> num;
		if(num > 0) plus.push_back(num);
		else if(num < 0) minus.push_back(num);
		else zero = 1;
	}
	sort(plus.begin(), plus.end());
	sort(minus.begin(), minus.end());
	// plus ó��
	if(plus.size() % 2 == 1){
		sum += plus[0];
		for(int i = 1; i < plus.size(); i += 2){
			if (plus[i] == 1)
				sum += plus[i] + plus[i + 1];
			else
				sum += plus[i] * plus[i + 1];
		}
	}else{
		for(int i = 0; i < plus.size(); i += 2){
			if (plus[i] == 1)
				sum += plus[i] + plus[i + 1];
			else
				sum += plus[i] * plus[i + 1];
		}
	}
	// minus ó��
	if(minus.size() % 2 == 1){
		for(int i = 0; i < minus.size() - 1; i += 2)
			sum += minus[i] * minus[i + 1];
		if(!zero) sum += minus[minus.size() - 1];
	}else{
		for(int i = 0; i < minus.size(); i += 2)
			sum += minus[i] * minus[i + 1];
	}
	cout << sum;
}
