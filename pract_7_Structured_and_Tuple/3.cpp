#include <iostream>
#include <windows.h>
using namespace std;
struct Distance
{

    void ShowDist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }

    int feet;
    double inches;
};

Distance AddDist(const Distance &d1, const Distance &d2)
{
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches >= 12.0)
    {
        d.inches -= 12.0;
        d.feet++;
    }
    return d;
}

Distance InputDist()
{
    Distance d;
    cout << "Enter feet: ";
    cin >> d.feet;
    cout << "Enter inches: ";
    cin >> d.inches;
    return d;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    Distance *masDist = new Distance[n];

    for (int i = 0; i < n; i++)
    {
        masDist[i] = InputDist();
    }

    for (int i = 0; i < n; i++)
    {
        masDist[i].ShowDist();
    }

    Distance sum = {0, 0.0};
    for (int i = 0; i < n; i++)
    {
        sum = AddDist(sum, masDist[i]);
    }
    sum.ShowDist();

    delete[] masDist;

    return 0;
}