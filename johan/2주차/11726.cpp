#include <iostream>
using namespace std;

int main()
{
    int a[1001], n;
    
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i <= 1000; i++)
        a[i] = (a[i - 1] + a[i - 2]) % 10007;
    cin >> n;
    cout << a[n] % 10007;
    return (0);
}
