#include "iostream"
using namespace std;

int sum_mas(int *mas, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    return s;
}

int sr_mas(int *mas, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    return s / n;
}

int sum_negative(int *mas, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            s += mas[i];
        }
    }
    return s;
}

int sum_positive(int *mas, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            s += mas[i];
        }
    }
    return s;
}

int sum_nechet(int *mas, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 == 1)
        {
            s += mas[i];
        }
    }
    return s;
}

int sum_chet(int *mas, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 == 0)
        {
            s += mas[i];
        }
    }
    return s;
}

int max_index(int *mas, int n)
{
    int max = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            index = i;
        }
    }
    return index;
}

int min_index(int *mas, int n)
{
    int min = 10000000;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
            index = i;
        }
    }
    return index;
}

int mas_pr_from_to(int *mas, int from, int to)
{
    int pr = 1;
    if (from > to)
    {
        int buf = from;
        from = to;
        to = buf;
    }
    for (int i = from; i <= to; i++)
    {
        pr *= mas[i];
    }
    return pr;
}

int main()
{
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "mas [" << i << "]=";
        cin >> mas[i];
        cout << endl;
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }

    cout << "s = " << s << endl;
    int sr = s / n;
    cout << "sr = " << sr << endl;

    int sumNegative = sum_negative(mas, n);
    int sumPositive = sum_positive(mas, n);
    int sumNechet = sum_nechet(mas, n);
    int sumChet = sum_chet(mas, n);
    int maxIndex = max_index(mas, n);
    int maxNumber = mas[maxIndex];
    int minIndex = min_index(mas, n);
    int minNumber = mas[minIndex];

    cout << "sumNegative = " << sumNegative << endl;
    cout << "sumPositive = " << sumPositive << endl;
    cout << "sumNechet = " << sumNechet << endl;
    cout << "sumChet = " << sumChet << endl;

    cout << "maxIndex = " << maxIndex << endl;
    cout << "maxNumber = " << maxNumber << endl;
    cout << "minIndex = " << minIndex << endl;
    cout << "minNumber = " << minNumber << endl;

    int pr = mas_pr_from_to(mas, minIndex, maxIndex);
    cout << "pr = " << pr << endl;

    return 0;
}