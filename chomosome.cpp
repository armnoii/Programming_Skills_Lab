#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    string str;
    cin >> str;
    
    if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
    {
        if (str[i] != 'A')
        {
            i++;
        }
        if (str[i] == 'A')
        {
            while (str[i] == 'A')
            {
                i++;
            }
            if (str[i] == 'F')
            {
                while (str[i] == 'F')
                {
                    i++;
                }
                if (str[i] == 'C')
                {
                    while (str[i] == 'C')
                    {
                        i++;
                    }
                    if (i == str.length())
                    {
                        cout << "Infected!";
                        return 0;
                    }
                    if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
                    {
                        if (i + 1 == str.length())
                        {
                            cout << "Infected!";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "Good";
}
