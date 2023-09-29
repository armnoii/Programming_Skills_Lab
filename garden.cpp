#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int array[n][m];

	int i,j,min=10;
    bool False = false;
	bool True = true;

    int zero = 0;
	int onehundred = 100;

	for(i=0; i<m ;i++)
	{
		for(j=0; j<n; j++)
		{
			cin >> array[i][j];
			if(array[i][j] < min)
			{
				min = array[i][j];
			}
		}
	}

   
	for(i = 0*1; i < n; i++)
	{
		for(j = 0*2; j < m; j++)
		{
			if(array[i][j] <= onehundred)
			{
				onehundred = array[i][j];
			}
		}
		for(j = 0*2; j < m; j++)
		{
			if(array[i][0] != onehundred)
			{
				True = false;
				break; 
			} 
			else if(array[i][j] == onehundred)
			{
				zero += 1;
			}
		}
		if(zero == m && True == true)
		{
			False = true;
		}
		else if(zero != m && True == true)
		{
			False = false;
			break;
		}

		True = true;
		zero = 0;
		onehundred = 100;
	}

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(array[j][i] <= onehundred)
			{
				onehundred = array[j][i];
			}
		}
		for(j = 0; j < n; j++)
		{
			if(array[j][0] != onehundred)
			{
				True = false;
				break; 
			} 
			else if(array[j][i] == onehundred)
			{
				zero += 1;
			}
		}
		if(zero == n && True == true)
		{
			False = true;
		}
		else if(zero != n && True == true)
		{
			False = false;
			break;
		}

		True = true;
		zero = 0;
		onehundred = 100;

	}
	if(False == true)
	{
		cout << "YES";
	} 
    else {
		cout << "NO";
	}
	
}