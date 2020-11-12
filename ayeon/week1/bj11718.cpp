#include <stdio.h>

int main(){
	char s[101];
	while (fgets(s, 101, stdin)){
		printf("%s", s);
	}
	return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
// 	string str;
// 	while (1){
// 		getline(cin, str);
// 		if (str=="")
// 			break;
// 		cout<<str<<"\n";
// 	}
// 	return 0;
// }
