#include "iostream"
#include "fstream"
#include <string>
using namespace std;

int main()
{
    ofstream file("text_1.txt", ios::out | ios::binary);

    if (!file)
    {
        cout << "Error" << endl;
        return 1;
    }

    // (char *)nums - указатель на буфер - необходимо привести к типу char, т.к. массив не определен как char
    // sizeof(nums) - заданное количество байт

    string str;
    cout << "Введите стихотворение. Для завершения введите пустую строку:\n";

    while (true)
    {
        getline(cin, str);
        if (str == "")
            break;
        file << str << "\n";
    }

    file.close();
    return 0;
}