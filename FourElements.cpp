#include <iostream>
using namespace std;

int main(){

    int NUM,x,j,l,i,k,sum;

    cin >> NUM;
    int ARR[NUM];

    for(i = 0; i < NUM; i++)
    {
        cin >> ARR[i];
    }

    cin >> x;

    for(i = 0;i < NUM-3; i++)
    {
        for(j = i + 1;j < NUM-2; j++)
        {
            for(k = j + 1;k <  NUM - 1; k++)
            {
                for(l = k+1;l < NUM; l++)
                {
                    sum = ARR[i] + ARR[j] + ARR[k] + ARR[l];
                    if (sum == x)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}