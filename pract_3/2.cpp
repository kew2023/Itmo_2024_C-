#include <iostream>
#include <string>

using namespace std;

void privet(string name)
{
    cout << name << ", " << "hello! " << endl;
}

void privet(string name, int k)
{
    cout << name << ", " << "hello! " << "You input " << k << endl;
}

int main()
{
    string name;
    cout << "What is your name? ";
    cin >> name;

    cout << endl;

    int k;
    cout << "Input number: " << endl;
    cin >> k;

    privet(name);
    privet(name, k);

    return 0;
}
