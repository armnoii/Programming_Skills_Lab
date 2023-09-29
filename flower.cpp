#include <iostream>

using namespace std ; 


int main()
{
    int n;
    cin >> n; 
    int arr[n][n];
    int zero = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(arr[i][j] > 0)
			{
				zero = arr[i][j];
				arr[i][j] = -1;
				for(int k = 0; k <= zero; k++)
				{
					if(i-k >= 0)
					{
						if(arr[i-k][j] == 0)
						{
							arr[i-k][j] = -1;	
						}
						for(int r = 1; r <= zero; r++)
						{
							if(r+j < n && arr[i-k][j+r] == 0)
							{
								arr[i-k][j+r] = -1;
							}
						}
						for(int l = 1; l <= zero; l++)
						{
							if(j-l >= 0 && arr[i-k][j-l] == 0)
							{
								arr[i-k][j-l] = -1;
							}
						}
					}
					if(i+k < n)
					{
						if(arr[i+k][j] == 0)
						{
							arr[i+k][j] = -1;	
						}
						for(int r = 1; r <= zero; r++)
						{
							if(r+j < n && arr[i+k][j+r] == 0)
							{
								arr[i+k][j+r] = -1;
							}
						}
						for(int l = 1; l <= zero; l++)
						{
							if(j-l >= 0 && arr[i+k][j-l] == 0)
							{
								arr[i+k][j-l] = -1;
							}
						}
					}
				}
			}
		}
	}

	int show = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(arr[i][j] == 0)
			{
				show++;
			}
		}
	}

	cout<<show;
}