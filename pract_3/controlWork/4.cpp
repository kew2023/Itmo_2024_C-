#include <iostream>
using namespace std;

int sumSeries(int n)
{
    if (n == 1)
        return 5;
    return 5 * n + sumSeries(n - 1);
}

int main()
{
    int n;
    cout << endl;
    cout << "n: ";
    cin >> n;
    cout << sumSeries(n) << endl;
    return 0;
}