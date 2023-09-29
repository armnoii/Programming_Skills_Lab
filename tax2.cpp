#include <iostream>
using namespace std;

int main(){
    int money,cash,cash2,cash3,cash4;
    while (true)
    {
        cin >> money;
        if (money == 0)
        {
            break;
        }
        if (money <= 100000)
        {
            cout << 0 << endl;
        }
        if (money > 10000000 && money <= 50000000)
        {
            cash = ((money - 10000000) * 32/100) + (5000000*20/100) + (4000000*12/100) + (900000*6/100);
            cout << cash<<endl;
        }
        if (money > 5000000 && money <= 10000000)
        {
            cash2 = ((money - 5000000) * 20/100) + (4000000*12/100) + (900000*6/100);
            cout << cash2<<endl;
        }
        if (money > 1000000 && money <= 5000000)
        {
            cash3 = ((money - 1000000) * 12/100) + (900000*6/100);
            cout << cash3<<endl;
        }
        if (money > 100000 && money <= 1000000)
        {
            cash4 = ((money - 100000) * 6/100);
            cout << cash4 <<endl;
        }
        
    }
    

}
