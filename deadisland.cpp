#include <iostream>
using namespace std;

int main()
{
    int W,H;
    cin >> W >> H;
    int arr[H][W];
    int count = 0;

    for(int i=0; i < H; i++)
    {
        for(int j=0; j < W; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i < H ; i++)
    {
        for(int j=0; j < W; j++)
		{
            if(arr[i][j] == 1)
            {
                count=0;
                for(int m=i-1; m < i+2; m++)
                {
                    for(int n=j-1; n < j+2; n++)
					{
                        if(arr[m][n] == 1)
						{
                            count++;
                        }
                    }
                }
                
                if(count < 3)
                {
                    cout << "No";
                    return 0;
                }
            }
        }
    }
    cout << "Yes";
    return 0;
}
