#include "iostream"
#include "fstream"
using namespace std;

int main()
{
    double sum = 0;
    int const n = 100;
    double nums[n];

    for (int i = 0; i < n; i++)
    {
        nums[i] = (rand() % 100);
    }

    ofstream out("test.txt", ios::out | ios::binary);

    if (!out)
    {
        cout << "Error" << endl;
        return 1;
    }

    // (char *)nums - указатель на буфер - необходимо привести к типу char, т.к. массив не определен как char
    // sizeof(nums) - заданное количество байт

    out.write((char *)nums, sizeof(nums));
    out.close();

    cout << endl;

    ifstream in("test.txt", ios::in | ios::binary);

    if (!in)
    {
        cout << "Error" << endl;
        return 1;
    }

    in.read((char *)&nums, sizeof(nums));
    int k = sizeof(nums) / sizeof(double);
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
        cout << nums[i] << " ";
    }

    cout << "\nSum = " << sum << endl;

    in.close();

    return 0;
}