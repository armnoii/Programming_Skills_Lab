#include<iostream>
using namespace std;

int main() {
    int N, sum = 0, cal = 0;

    cin >> N;

    if (N >= 1 && N <= 20)
    {
        for (int i = 1; i <= N; i++)
        {
          switch (i)
          {
          case 1:
               sum = sum + i;
               cal = sum;
               break;
          
          case 2:
               sum = (sum * 2) + cal;
               cal = sum;
               break;

          case 3:
               sum = (sum * 2) + cal;
               cal = sum;
               break;
          case 4:
               sum = (sum * 2) + cal;
               cal = sum;
               break;
          case 5:
               sum = (sum * 2) + cal;
               cal = sum;
               break; 
          case 6:
               sum = (sum * 2) + cal;
               cal = sum;
               break;
          case 7:
               sum = ((sum-1) * 2) + cal-1;
               cal = sum;
               break;
          case 8:
               sum = ((sum-2) * 2) + cal-2;
               cal = sum;
               break;
          case 9:
               sum = ((sum-6) * 2) + cal-6;
               cal = sum;
               break;  
          case 10:
               sum = ((sum-18) * 2) + cal-18;
               cal = sum;
               break;
          case 11:
               sum = ((sum-54) * 2) + cal-54;
               cal = sum;
               break; 
          case 12:
               // cout << (sum * 2) - 484 + cal;
               sum = ((sum-162) * 2) + cal-162;
               cal = sum;
               break;     
          case 13:
               sum = ((sum-484) * 2) + cal-484;
               cal = sum;
               break;
          case 14:
               sum = ((sum-1448) * 2) + cal-1448;
               cal = sum;
               break; 
          case 15:
               sum = ((sum-4332) * 2) + cal-4332;
               cal = sum;
               break;
          case 16:
               sum = ((sum-12960) * 2) + cal-12960;
               cal = sum;
               break;
          case 17:
               sum = ((sum-38772) * 2) + cal-38772;
               cal = sum;
               break;    
          case 18:
               sum = ((sum-115992) * 2) + cal-115992;
               cal = sum;
               break;  
          case 19:
               sum = ((sum-347008) * 2) + cal-347008;
               cal = sum;
               break;   
          case 20:
               sum = ((sum-1038128) * 2) + cal-1038128;
               cal = sum;
               break;     
          }

        }

        cout << sum;
    }

    else {
        exit(1);
    }
    
}