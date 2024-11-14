#include "iostream"
#include "cmath"

using namespace std;

bool check(int x);

int main()
{

    system("chcp 1251");

    int n;

    cout << "Enter n = ";

    cin >> n;

    if (!check(n))
    {
        cout << "No";
        return 0;
    }

    int position = 0;

    for (int i = 2; i <= n; i++)
    {
        if (check(i))
        {
            position++;
        }
    }

    if (check(position))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

bool check(int x)
{
    if (x == 2)
    {
        return true;
    };

    if (x < 2)
    {
        return false;
    };

    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    };

    return true;
};