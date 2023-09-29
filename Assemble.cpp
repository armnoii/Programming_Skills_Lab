#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, P;
    cin >> N;
    int avengers[N];
    
    int count = 0;
    int energy = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> avengers[i];
    }

    cin >> P;

    sort(avengers, avengers + N, greater<int>());
  

    for (int j = 0; j < N; j++)
    {
        if (energy > P)
        {
            break;
        }
        if (energy <= P) {
        	energy += avengers[j];
        	count ++;
		}
    }
    
    if (energy > P)
    {
        cout << count;
    }
    else {
        cout << "YOU DIE";
    } 
}
