#include "iostream"
#include "fstream"
#include <string>
using namespace std;

int main()
{
    ofstream file("text_2.txt", ios::out | ios::binary);

    if (!file)
    {
        cout << "Error" << endl;
        return 1;
    }

    string strBeforeSort;
    string strAfterSort;

    const int N = 10;
    int a[N] = {1, 25, 6, 32, 43, 5, 96, 23, 4, 55};

    int min = 0; // Для записи минимального значения
    int buf = 0; // Для обмена значениями

    for (int i = 0; i < N; i++)
    {
        strBeforeSort += to_string(a[i]) + ' ';
    }

    for (int i = 0; i < N; i++)
    {
        min = i; // Номер текущей ячейеи, как яейки с минимальным значением
        for (int j = i + 1; j < N; j++)
        {
            min = (a[j] < a[min]) ? j : min;
        }

        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    for (int i = 0; i < N; i++)
    {
        strAfterSort += to_string(a[i]) + ' ';
    }

    file << "Array before sort: " << strBeforeSort << "\n"
         << "Array after sort: " << strAfterSort << "\n";

    file.close();
    return 0;
}
