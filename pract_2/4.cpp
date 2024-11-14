#include <iostream>

using namespace std;

int main()
{

    int k, m, s;
    cout << "k = ";
    cin >> k;
    cout << "m = ";
    cin >> m;
    for (int i = 1; i <= 100; i++)
    {

        if ((i > k) && (i < m))
        {
            s += i;
        }
    }
    cout << "s = " << s << endl;
    return 0;
}