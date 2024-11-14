#include "iostream"
using namespace std;

void show_array(const int Arr[], const int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

bool from_min(const int a, const int b)
{
    return a > b;
}

bool from_max(const int a, const int b)
{
    return a < b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if ((*compare)(Arr[j], Arr[j + 1]))
                swap(Arr[j], Arr[j + 1]);
        }
    }
}

int main()
{

    const int N = 10;
    int my_choose = 0;
    int a[N] = {9, 8, 7, 6, 1, 2, 3, 5, 4, 9};

    cout << "1. Sort array in ascending order" << endl;
    cout << "2. Sort array in descending order" << endl;

    cin >> my_choose;

    cout << "Array: ";
    show_array(a, N);

    switch (my_choose)
    {
    case 1:
        bubble_sort(a, N, from_min);
        break;

    case 2:
        bubble_sort(a, N, from_min);
        break;

    default:
        cout << "\rНеизвестная операция ";
        break;
    }

    cout << "Sorted array: ";
    show_array(a, N);

    return 0;
}