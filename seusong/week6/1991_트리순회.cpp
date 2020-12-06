#include <iostream>
#include <vector>

using namespace std;
char btree[27][2] = {'.',};

void preorder(char node){
	if(node == '.')
		return;
	else{
		cout << node;
		preorder(btree[node - 'A'][0]);
		preorder(btree[node - 'A'][1]);
	}
}
void postorder(char node){
	if(node == '.')
		return;
	else{
		postorder(btree[node - 'A'][0]);
		postorder(btree[node - 'A'][1]);
		cout << node;
	}
}
void inorder(char node){
	if(node == '.')
		return;
	else{
		inorder(btree[node - 'A'][0]);
		cout << node;
		inorder(btree[node - 'A'][1]);
	}
}
int main(void){
	int n;
	char node, left, right;

	cin >> n;
	for(int i = 0; i < n;i++){
		cin >> node >> left >> right;
		btree[node - 'A'][0] = left;
		btree[node - 'A'][1] = right;
	}
	preorder('A');
	cout << "\n";
	inorder('A');
	cout << "\n";
	postorder('A');
}
