#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

struct Time
{
    int hours, minutes, seconds;

    void print()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    };

    void setTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;

        if (seconds >= 60)
        {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }
        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    };

    int getSeconds()
    {
        return hours * 3600 + minutes * 60 + seconds;
    };

    void addTime(Time t)
    {
        hours += t.hours;
        minutes += t.minutes;
        seconds += t.seconds;

        if (seconds >= 60)
        {
            minutes += seconds / 60;
            seconds = seconds % 60;
        };

        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    };
};

int main()
{
    Time t1;
    cout << "Enter time in format HH MM SS: " << endl;
    int h, m, s;
    cin >> h >> m >> s;
    t1.setTime(h, m, s);
    t1.print();

    cout << "Seconds: " << t1.getSeconds() << endl;

    Time t2;
    cout << "Enter time in format HH MM SS: " << endl;
    cin >> h >> m >> s;
    t2.setTime(h, m, s);
    t2.print();

    Time t;
    t.setTime(0, 0, 0);
    t.addTime(t1);
    t.addTime(t2);
    cout << "Result: \n";
    t.print();

    return 0;
}