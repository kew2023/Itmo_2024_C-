#include <iostream>

using namespace std;

int main()
{
    int c10 = 10;
    int c5 = 5;
    int c2 = 2;
    int c1 = 1;

    int n;

    cout << "Enter n: ";

    cin >> n;

    int count10 = n / c10;
    int count5 = n % c10 / c5;
    int count2 = n % c10 % c5 / c2;
    int count1 = n % c10 % c5 % c2 / c1;

    cout << "Count10: " << count10 << endl;
    cout << "Count5: " << count5 << endl;
    cout << "Count2: " << count2 << endl;
    cout << "Count1: " << count1 << endl;
    cout << "Count: " << count10 + count5 + count2 + count1 << endl;
    return 0;
}