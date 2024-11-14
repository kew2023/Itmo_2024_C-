#include <iostream>

using namespace std;

bool Input(int &a, int &b)
{
    cout << "Enter a (10 - 99) and b (100 - 999): ";
    cin >> a >> b;

    if (a >= 10 && a <= 99 && b >= 100 && b <= 999)
    {
        return true;
    }

    return false;
}

int main()
{
    int a, b;

    if (Input(a, b) == false)
    {
        cerr << "Error";
        return 1;
    }

    int s = a + b;
    return 0;
}