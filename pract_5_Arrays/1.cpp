#include "iostream"
using namespace std;

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

    int sumNegative = 0;
    int sumPositive = 0;
    int sumNechet = 0;
    int sumChet = 0;
    int maxIndex = -1;
    int maxNumber = 0;
    int minIndex = -1;
    int minNumber = 10000000;

    for (int i = 0; i < n; i++)
    {

        if (mas[i] < 0)
        {
            sumNegative += mas[i];
        }
        else
        {
            sumPositive += mas[i];
        }

        if (mas[i] % 2 == 0)
        {
            sumChet += mas[i];
        }
        else
        {
            sumNechet += mas[i];
        }

        if (mas[i] >= maxNumber)
        {
            maxNumber = mas[i];
            maxIndex = i;
        }
        if (mas[i] <= minNumber)
        {
            minNumber = mas[i];
            minIndex = i;
        }
    }

    cout << "sumNegative = " << sumNegative << endl;
    cout << "sumPositive = " << sumPositive << endl;
    cout << "sumNechet = " << sumNechet << endl;
    cout << "sumChet = " << sumChet << endl;

    cout << "maxIndex = " << maxIndex << endl;
    cout << "maxNumber = " << maxNumber << endl;
    cout << "minIndex = " << minIndex << endl;
    cout << "minNumber = " << minNumber << endl;

    int pr = 1;

    int fromIndex = 0;
    int toIndex = 0;

    if (maxIndex > minIndex)
    {
        fromIndex = minIndex;
        toIndex = maxIndex;
    }
    else
    {
        fromIndex = maxIndex;
        toIndex = minIndex;
    }

    for (int i = fromIndex; i <= maxIndex; i++)
    {
        pr *= mas[i];
    }
    cout << "pr = " << pr << endl;

    return 0;
}