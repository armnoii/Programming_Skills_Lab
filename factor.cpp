#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int N;
    cin >> N;

    if (N == 1)
    {
        cout << N;
        exit(1);
    }
    
    
    while (N % 2 == 0)
    {
        cout << 2 << endl;
        N = N/2;
    }

    for (int i = 3; i <= sqrt(N); i = i + 2)
    {
 
        while (N % i == 0)
        {
            cout << i << endl;
            N = N/i;
        }
    }

    if (N > 2)
        cout << N << endl;

    return 0;
}