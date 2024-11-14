#include <iostream>

using namespace std;

bool validate_snils(string snils_str)
{
    string cleared_snils;

    for (auto c : snils_str)
    {
        if (isdigit(c))
        {
            cleared_snils += c;
        }
        else if (c != ' ' && c != '-') // игнорируем пробелы и знаки '-'
        {
            return false;
        }
        else
        {
            return false;
        }
    }

    if (cleared_snils.length() != 11)
    {
        return false;
    }

    string number = cleared_snils.substr(0, 9);
    string control_number = cleared_snils.substr(9, 2);

    int total = 0;

    for (int i = 0; i < 9; i++)
    {
        total += (number[i] - '0') * (9 - i);
    }

    int temp_control = 0;

    if (total < 100)
    {
        temp_control = total;
    }
    else if (total == 100 || total == 101)
    {
        temp_control = 0;
    }
    else
    {
        temp_control = total % 101 % 100;
    }

    if (temp_control == stoi(control_number))
    {
        return true;
    }

    return false;
}

int main()
{
    string snils;

    cout << "Enter snils ";

    getline(cin, snils);

    if (validate_snils(snils))
    {
        cout << "Snils is valid";
    }
    else
    {
        cout << "Snils is not valid";
    }

    return 0;
}