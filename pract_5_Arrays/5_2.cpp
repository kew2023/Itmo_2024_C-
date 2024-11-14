#include "iostream"
#include <vector>
using namespace std;

int main()
{
    srand(time(NULL));
    int a, b, c;
    int k = 0;

    const int n = 10;
    int mas[n];
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        cout << a << " * " << b << " = ";

        cin >> c;
        mas[i] = c;

        if (c != a * b)
        {
            v2.push_back(c);
            k++;
        }
        else
        {
            v1.push_back(c);
        }
    }

    cout << "\nAll: ";
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }

    cout << "\nGood: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << "\nBad: ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    cout << "\nCount error " << k << endl;
}