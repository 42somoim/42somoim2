#include <iostream>
using namespace std;

int main()
{
    while(true)
    {
        int a, b;
        cin >> a >> b;
        if (cin.eof() != true)
            cout << a + b << endl;
        else
            break;
    }
}
