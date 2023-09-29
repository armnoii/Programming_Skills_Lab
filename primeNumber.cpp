#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,zero;
	zero = 0;
	cin >> n;
	if (n >= 2 && n <= 1000000000)
	{
		for(int i=2; i <= sqrt(n); ++i)
		{
			if(n % i == 0) 
			{
				zero++;
				break;
			}
		}

		if (zero == 0){
			cout << "YES";
			
		}
		if (zero != 0){
			cout << "NO";
		}
	}
	else if (n <= 1)
	{
		cout << "NO";
	}
	return 0;
}

