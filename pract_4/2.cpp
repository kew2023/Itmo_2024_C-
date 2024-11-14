#include <iostream>

using namespace std;

void swap(int *, int *);
void swap(int &, int &);

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5, y = 10;

    swap(&x, &y);
    cout << x << " " << y << endl;

    swap(x, y);
    cout << x << " " << y << endl;

    return 0;
}