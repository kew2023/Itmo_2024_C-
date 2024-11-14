#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int r1 = 1;
    int r2 = 2;

    int center_x = rand() % 10;
    int center_y = rand() % 10;

    int score = 0;
    int shot_counter = 0;

    int x = 0;
    int y = 0;
    int error;

    while (score < 50)
    {
        cout << "Enter coordinates x and y (x<=10 y<=10): " << endl;
        cin >> x >> y;

        error = rand() % 3 - 1;

        cout << "Your shot with error: " << x + error << " " << y - error << endl;

        if ((x + error - center_x) * (x + error - center_x) + (y - error - center_y) * (y - error - center_y) <= r1 * r1)
        {
            score += 10;
            cout << "Score: " << score << endl;
            shot_counter += 1;
        }

        else if ((x + error - center_x) * (x + error - center_x) + (y - error - center_y) * (y - error - center_y) <= r2 * r2)
        {
            score += 5;
            cout << "Score: " << score << endl;
            shot_counter += 1;
        }
        else
        {
            cout << "Score: " << score << endl;
            cout << "miss\n";
            shot_counter += 1;
        }
    }

    cout << "Center coordinates: " << center_x << " " << center_y << endl;

    cout << "Shot counter: " << shot_counter << endl;

    if (shot_counter == 6)
    {
        cout << "YOU ARE MASTER";
    }
    else if (shot_counter <= 12)
    {
        cout << "YOU ARE GOOD";
    }
    else
    {
        cout << "YOU ARE BAD";
    }
    return 0;
}