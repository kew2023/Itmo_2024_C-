#include <iostream>
using namespace std;

string int_to_binary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main()
{
    int n;
    cout << "n: ";
    cin >> n;

    string binary = int_to_binary(n);
    cout << binary << endl;

    return 0;
}