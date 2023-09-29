#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n, x, y, ans = 0;
    float tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        tmp = pow(x, 2) + pow(y, 2);
        tmp = pow(tmp, 0.5);
        // cout << "temp: " << tmp;
        if (tmp < 2)
            ans += 5;
        else if (tmp < 4)
            ans += 4;
        else if (tmp < 6)
            ans += 3;
        else if (tmp < 8)
            ans += 2;
        else if (tmp < 10)
            ans += 1;
    }
    cout << ans;
}