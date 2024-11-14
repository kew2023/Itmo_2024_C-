#include <iostream>
using namespace std;

int ged(int m, int n)
{
    if (n == 0)
        return m;
    return ged(n, m % n);
}

int main()
{
    int a, b;
    cout << "Input numbers:" << endl;
    cin >> a >> b;
    cout << ged(a, b) << endl;
    return 0;
}