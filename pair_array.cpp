#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f, x, a = 0, b = 0, ans = 0, tmp = 0;
    cin >> f;
    int arr[f];

    for (int i = 0; i < f; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
        {
            tmp++;
        }
    }
    
    sort(arr, arr + f);
    int index = tmp;

    for (int i = 0; i < index; i += 2)
    {
        ans += arr[i] * arr[i + 1];
        // cout << "N1: " << arr[i] << endl;
        // cout << "N2: " << arr[i + 1] << endl;
    }

    for (int i = f - 1; i > tmp; i -= 2)
    {
        ans += arr[i] * arr[i - 1];
        // cout << "N2: " << arr[i] << endl;
        // cout << "N3: " << arr[i - 1] << endl;
    }

    if ((tmp) % 2 != 0)
    {
        if ((f - tmp) % 2 != 0)
        {
            ans += arr[index] * arr[index + 1];
        }
        else
        {
            ans += arr[index];
        }
    }
    else
    {
        if ((f - tmp) % 2 != 0)
        {
            ans += arr[tmp];
        }
    }
    cout << ans;
}