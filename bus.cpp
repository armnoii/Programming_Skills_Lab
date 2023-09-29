#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, d, r;

    while (true)
    {
        cin >> n >> d >> r;
        int k = 0;
        int ot = 0;
        int y = 0;

        if (n == 0 && d == 0 && r == 0)
        {
            break;
        }

        int distance[n];
        int distance_2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> distance[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> distance_2[i];
        }

        sort(distance, distance + n);
        sort(distance_2, distance_2 + n);

        while (n)
        {
            k = distance[y] + distance_2[n - 1];
            if (k > d)
            {
                ot = ot + (k - d);
            }
            n--;
            y++;
        }

        cout << ot * r << endl;
    }
}
