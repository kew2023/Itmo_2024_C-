#include <iostream>
#include <string>

using namespace std;

void privet(string name);

int main()
{
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << name << ", " << "hello" << endl;

    return 0;
}

void privet(string name)
{
    cout << name << ", " << "hello" << endl;
}