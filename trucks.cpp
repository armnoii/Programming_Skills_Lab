#include <iostream>
using namespace std;

int main()
{

    int n;
    int w;
    cin>>n>>w;
    
    while(n!=0 && w!=0) 
    {
        int arr[n];
        for (int i=0 ; i<n ;i++) {
            cin>>arr[i];
        }

        int t = 0;
        int count=0; 

        for(int x = 0 ; x<n ; x++) {
            if (t < arr[x]) {
                t=w;
                count++;
            }
            t-=arr[x];
        }

        if(n!=0 && w!=0) {
            cout<< count<<endl;
            cin>>n>>w;
        }
    }

}