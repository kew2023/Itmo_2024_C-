#include <iostream>
#include <Windows.h>

using namespace std;

int main()

{
    system("chcp 1251");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char op;
    cout << "Сделай свой выбор, собери авто своей мечты: ";
    cin >> op;
    switch (op)
    {
    case 'V':
        cout << "Мощный кондиционер хочу V1 \n";
    case 'S':
        cout << "Радио играть должно S1 \n";

    default:
        cout << "Колеса круглые D1 \n";
        cout << "Мощный двигатель D2 \n";
    }

    return 0;
}