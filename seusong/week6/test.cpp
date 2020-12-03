#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> graph[20001];
int color[20001];
string ans;

void dfs(int start){
    for (int i = 0; i < graph[start].size(); i++){
        int next = graph[start][i];
        if (color[start] && color[next] && (color[start] == color[next])){
            ans = "NO";
            break;
        }
        if (!color[next]){
            if (color[start] == 1)    color[next] = 2;
            else    color[next] = 1;
            dfs(next);
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int k;
    cin >> k;
    while (k--){
        int v, e;
        scanf("%d %d", &v, &e);
        for(int i=1; i<=v; i++)
            graph[i].clear();
        memset(color, 0, sizeof(color));
        for (int i = 0; i < e; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        ans = "YES";
        for (int i = 1; i <= v; i++){
            if (color[i] == 0){
                color[i] = 1;
                dfs(i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
