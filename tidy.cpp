#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count;
    long n;
    cin >> count;


    for (int i = 0; i < count; i++)
    {
        vector<int> vec_tor;
        cin >> n;

        while (n)
        {
            vec_tor.push_back(n % 10);
            n = n / 10;
        }

        int number = vec_tor.size();

        if (number != 1)
        {
            for (int j = number - 1; j > 0; j--)
            {
                for (int k = number - 1; k > 0; k--)
                {
                    if (vec_tor[k] > vec_tor[k - 1])
                    {
                        vec_tor[k] -= 1;
                        while (k != 0)
                        {
                            vec_tor[k - 1] = 9;
                            k--;
                        }
                        break;
                    }
                }
            }
        }

        long num = 0;

        for (int j = number - 1; j >= 0; j--)
        {
            num = (num * 10) + vec_tor[j];
        }

        cout << "Case #" << i + 1 << ": " << num << endl;
    }

    return 0;
}