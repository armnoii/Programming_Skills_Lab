#include <iostream>
using namespace std;

int main()
{
    int N, K,first;
    cin >> N >> K;

    int arr[N];
    int arr_2[N];

    int count = 0;
    int start, end;

    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
        arr_2[i] = i + 1;
    }

    for (int i = 0; i < K; i++)
    {
        cin >> start >> end;

        for (int j = 0; j < N; j++)
        {
            if (arr[j] == start)
            {
                start = j;
            }
            else if (arr[j] == end)
            {
                end = j;
                break;
            }
        }

        first = start;
        for (int j = end + 1; j < N; j++)
        {
            arr[first] = arr_2[j];
            first++;
            count++;
        }

        for (int j = start + count; j < N; j++)
        {
            arr[j] = arr_2[start];
            start++;
        }

        for (int j = 0; j < N; j++)
        {
            arr_2[j] = arr[j];
        }

        count = 0;
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
}