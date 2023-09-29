#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    float ip, sum=0;
    while (true){
        cin >> ip;
		if (ip == 0)
        {
            break;
        }
		if (ip > 0 || ip <= 50000000)
		{
			if (ip <= 100000)
	    	{
	        	cout << 0 << endl;
	    	}
	    	if (ip > 10000000 && ip <= 50000000)
	    	{
	        	sum = ((ip-10000001) * 32/100) + (5000001*20/100) + (4000000*12/100) + (900000*6/100);
	        	cout << sum << endl;
	    	}
	    	if (ip > 5000000 && ip <= 10000000)
	   		{
	        	sum = ((ip-5000001)*20/100) +  (4000000*12/100) + (900000*6/100);
	        	cout << sum << endl;
	    	}
	    	if (ip > 1000000 && ip <= 5000000)
	    	{
	        	sum = ((4000000-ip)*12/100) + (900000*6/100);
	        	cout << sum << endl;
	    	}
	    	if (ip > 100000 && ip <= 1000000)
	    	{
	        	sum = ((900000-ip)*6/100);
	        	cout << sum << endl;
	    	}
		} 
    }
}
