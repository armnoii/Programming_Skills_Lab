#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string text;
    cin >> text;

    int zero = 0;

    int size = text.length();
    string arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = text[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 2; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                if (arr[i] != arr[j - 1])
                {
                    zero++;
                    break;
                }
            }
        }
    }

    if (zero != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}