#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int arr[7] = {3, 1, 4, 6, 7, 3, 5};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
    {
        if (n < arr[i])
        {
            if (arr[i+1] != 0 && arr[i-1] != 0)
            {
                arr[i] = 0;
                arr[i-1] = 0;
            }
            else
            {
                arr[i] = 0;
                arr[i+1] = 0;
            }
            
            
            
        }
        
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i];        
    }
    
}