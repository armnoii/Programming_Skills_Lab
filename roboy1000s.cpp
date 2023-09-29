#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{
    int k;
    int n = 0;
    int e = 0;
    int s = 0;
    int w = 0;
    char c[100];

    cin >> c;
    cin >> k;

    for(int i = 0; i < strlen(c); i++)
    {
        if(c[i] == 'N') {
            n++;
        }
        else if(c[i] == 'E') {
            e++;
        }
        else if(c[i] == 'S') {
            s++;
        }
        else {
            w++;
        }
    }

    if(n <= s && n > 0) {
        while(n <= s && n > 0 && k > 0) {
            n--;
            k--;
        }
    }
    else if(s < n && s > 0) {
        while(s < n && s > 0 && k > 0) {
            s--;
            k--;
        }
    }

    if(e <= w && e > 0) {
        while(e <= w && e > 0 && k > 0) {
            e--;
            k--;
        }
    }
    else if(w < e && w > 0) {
        while(w < e && w > 0 && k > 0) {
            w--;
            k--;
        }
    }

    for (int i = 0; i < k; i++)
    {
        if(n > 0) {
            n--;
        }
        else if(s > 0) {
            s--;
        }
        else if(e > 0) {
            e--;
        }
        else {
            w--;
        }
    }
    
    int sum1 = abs(n - s);
    int sum2 = abs(e - w);

    cout << ((sum1 + sum2) * 2);

    return 0;
}
