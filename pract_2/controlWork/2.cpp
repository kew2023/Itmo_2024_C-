#include <iostream>

using namespace std;

int main()
{

    int snils = 0;
    int control_sum;

    cout << "Enter snils: ";
    cin >> snils;

    cout << "\nEnter control number: ";
    cin >> control_sum;

    int temp = 0;
    int temp_sum = 0;
    int control_sum_correct = 0;
    int counter = 0;

    int last_temp = 100000;
    bool numbers_check = false;

    if (!(1000000000 < snils && snils <= 100000000))
    {
        cout << "Error - small snils";
        return 0;
    }

    for (int i = 10; i <= 1000000000; i *= 10)
    {
        counter++;

        temp = snils % i / (i / 10);

        temp_sum += temp * counter;

        if (temp == last_temp)
        {
            numbers_check = true;
        }

        last_temp = temp;
    }

    if (numbers_check)
    {
        cout << "False double numbers";
        return 0;
    }

    if (temp_sum < 100)
        control_sum_correct = temp_sum;
    else if (temp_sum == 100 || temp_sum == 101)
        control_sum_correct = 0;
    else if (temp_sum > 101)
        control_sum_correct = temp_sum % 101 % 100;

    if (control_sum_correct == control_sum)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}