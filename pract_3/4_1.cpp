#include <iostream>

using namespace std;

int addNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + addNumbers(n - 1);
    }
}

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    cout << addNumbers(n) << endl;

    return 0;
}