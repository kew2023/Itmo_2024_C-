#include "iostream"
using namespace std;

int main()
{
    const int N = 10;
    int a[N] = {1, 25, 6, 32, 43, 5, 96, 23, 4, 55};

    int min = 0; // Для записи минимального значения
    int buf = 0; // Для обмена значениями

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

    for (int i : a)
    {
        cout << i << "\t";
    }

    return 0;
}