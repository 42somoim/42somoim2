#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string temp,a,b;
        cin >> temp;
        stringstream ss(temp);
        getline(ss,a,',');
        getline(ss,b,',');
        cout << stoi(a) + stoi(b) << endl;
    }
}
