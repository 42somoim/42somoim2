#include <iostream>
using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, n;
	cin>>n;
	while(n){
		cin>>a>>b;
		cout<<a+b<<"\n";
		n--;
	}
	return 0;
}

// #include <stdio.h>

// int main(){
// 	int a, b, n;
// 	scanf("%d", &n);
// 	while (n){
// 		scanf("%d %d", &a, &b);
// 		printf("%d\n", a+b);
// 		n--;
// 	}
// 	return 0;
// }
