#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int M, N;
	cin>> M >> N;
	
	int boat_1[M];
	int boat_2[N];
	
	int ans = 0;
	
	for(int i = 0; i < M; i++)
	{
		cin >> boat_1[i];
	}
	for(int i = 0; i < N; i++)
	{
		cin >> boat_2[i];
	}
	
	sort(boat_1, boat_1+M);
	sort(boat_2, boat_2+N);
	
	int row1 = M - 1;
	int row2 = N - 1;
	
	// for(int i = row1; i >= 0; i--)
	// {
	// 	for(int j = row2; j >= 0; j--)
	// 	{
	// 		if(boat_1[i] >= boat_2[j] && boat_2[j] != 0)
	// 		{
	// 			boat_2[j] = 0;
	// 			ans += 1;
	// 			row1 --;
	// 			break;
	// 		}
	// 	}
	// }

	for (int i = 0; i < M; i++)
	{
		if (boat_2[ans] <= boat_1[i])
		{
			ans++;
		}
	}
	
	cout << ans;
}
