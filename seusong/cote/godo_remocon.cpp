#include<bits/stdc++.h>

using namespace std;
bool broken[10];
// ���� �� �ִ� ä������ Ȯ���ϴ� �Լ�.
// ���� ���� �� ���� ä���̸� 0�� ��ȯ,
// ���� �� �ִ� ä���̸� �� ä���� ���̸� ��ȯ�Ѵ�.
int check_promising(int page){
	int len;
	len = 0;
	if(page == 0 && !broken[0]) return 1;
	while(page > 0){
		if(broken[page % 10]) return 0;
		page /= 10; len++;
	}
	return len;
}
int main(void){
	int n, m, button, min_cnt;

	cin >> n >> m;
	for(int i = 0;i < m; i++){
		cin >> button;
		broken[button] = true;
	}

	// 100���� �����ϴ� ���� ���
	min_cnt = abs(n - 100);
	// ���Ʈ ����(���� �� �ִ� ��� ä���� ���� ����Ѵ�.)
	// ������ 50000���� �ε� 100000���� ���� ������ -�ϴ� ��쵵 ����ؼ� �̴�.
	// ex) 49999���ε� ��� ������ ��ư�� 5���̶�� 5555���� ���� �ͺ��� 55555���� ���� ���� �� ������.
	for(int i = 0; i <= 1000000 ; i++){
		// i�� ���峭 ��ư�� ���� ��쿡�� �ٷ� continue(���峭 ��ư�� �ִ� i�� ���� �� ���� ���̴�.)
		// check_promising(n); -> ���峭 ��ư�� ���� ��� 0��ȯ, �ƴϸ� �� ��ư�� ���� ��ȯ
		int len = check_promising(i);
		if(len > 0){
			int tmp = abs(n - i);
			if((tmp + len) < min_cnt){
				min_cnt = (tmp + len);
			}
		}
	}
	cout << min_cnt;
}
