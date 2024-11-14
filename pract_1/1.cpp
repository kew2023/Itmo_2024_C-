#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "What is your name? ";
    // cin >> name; // Получает только 1 слово
    getline(cin, name); // Получает всю строку целиком и переводит ее из cin в name
    cout << "Hello, " << name << "!!!\n";
}
