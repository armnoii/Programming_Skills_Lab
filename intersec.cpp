#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0, count = 0, N;
    cin >> N;
    int A[N];
    int B[N];

    for (int j = 0; j < N; j++)
    {
        cin >> A[j];
    }
    for (int k = 0; k < N; k++)
    {
        cin >> B[k];
    }
    sort(A, A + N);
    sort(B, B + N);
    
    while (i < N && j < N)
    {
        if (A[i] == B[j])
        {
            i = i + 1;
            j = j + 1;
            count = count + 1;
        }
        else
        {
            if (A[i] < B[j])
            {
                i = i + 1;
            }
            else
            {
                j = j + 1;
            }
        }
    }
    cout << count;
}