#include<iostream>
#include<cmath> 
using namespace std;

int prime(int x) {
    int i, n = x;
    bool isPrime = true;
 
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        return 1 ;
    else
        return 0;
}

int main() {
    int frien = 0;
    int walker = 0;

    int NX, K;
    cin >> NX >> K;

    int dev[NX];

    for (int i = 0; i < NX; i++)
    {
        cin >> dev[i];
    }

    for (int k = 0; k < NX; k++)
    {
        if(prime(dev[k])==1){
            frien += 1;
        }

        else if (prime(dev[k])==0){
            walker += 1;
        }
    }

    if((frien + K) > walker)
    {
        cout << "YES";
    }
    else if ((frien + K) <= walker)
    {
        cout << "NO";
    }
    
    
}