#include <string>
#include <vector>

using namespace std;

int main(void){

}
int dfs(int n, int target){
    for(int i = 0; i < n;i++){
        if(computers[target][i] && visited[target][i] == 0)
        {visited[target][i] = 1; dfs(n, i);}
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    dfs(n, 0);
    return answer;
}
