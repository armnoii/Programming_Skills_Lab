#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;

    float d;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        d = sqrt((x * x) + (y * y));
        // cout << "d: " << d << endl;

        if (d < 2)
        {
            s += 5;
        }
        else if (d < 4)
        {
            s += 4;
        }
        else if (d < 6)
        {
            s += 3;
        }
        else if (d < 8)
        {
            s += 2;
        }
        else if (d < 10)
        {
            s += 1;
        }
    }
    cout << s;
}
