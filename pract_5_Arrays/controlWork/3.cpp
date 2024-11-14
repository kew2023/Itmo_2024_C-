#include "iostream"
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            if (i > 0)
            {
                swap(arr[i], arr[i - 1]);
            }
            return i;
        }
    }
    return -1;
}

int main()
{
    const int size = 7;
    int arr[size] = {5, 3, 8, 6, 1, 9, 2};
    int key;

    cout << "Enter the key: ";
    cin >> key;

    cout << "Array before transformation: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = search(arr, size, key);

    if (index == -1)
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "Key found at index " << index << endl;
    }

    cout << "Array after transformation: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}