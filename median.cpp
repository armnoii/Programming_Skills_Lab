#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int w,h,size;
	cin >> w >> h >> size;

	w = w + 2;
	h = h + 2;
	int in[w][h];
	
	for(int i=0; i<w; i++)
	{
		for(int j=0; j<h; j++)
		{
			if(i==0 || j==0 || i==w-1 || j==h-1) 
			{
				in[i][j] = 0;
			}
			else
				cin >> in[i][j];
		}
	}
	
	
	for(int i=1; i<w-1; i++)
	{
		for(int j=1; j<h-1 ;j++)
		{
			if(size == 4)
			{
				int filtering[5] = {in[i-1][j], in[i][j-1], in[i][j], in[i][j+1], in[i+1][j]};
				sort(filtering, filtering + 5);
				cout << filtering[2] << " ";
			}

		}

		cout << endl;
	}
}
