#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    int arr[N];
    int max = 0, sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    // for (int i = 0; i < n; ++i){
    //     cout << arr[i] << " ";
    // }
    int s = 0;
    for (int j = n-1; j >= 0; j--)
    {

        if (s < T)
        {
            sum += arr[j];
            // cout << "max" << arr[j];
            // cout << endl;
        }
        s++;
        
        
    }

    cout << sum;
    
}