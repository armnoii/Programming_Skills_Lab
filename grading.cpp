#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int work_exam,i=0,sum=0;

    while (i < 4)
    {
        cin >> work_exam;
        sum = sum + work_exam;
        i++;
        if (i == 4)
        {
           if (sum >= 80 && sum <= 100)
           {
               cout << "A";
           }
           if (sum >= 75 && sum <= 79)
           {
               cout << "B+";
           }
           if (sum >= 70 && sum <= 74)
           {
               cout << "B";
           }
           if (sum >= 65 && sum <= 69)
           {
               cout << "C+";
           }
           if (sum >= 60 && sum <= 64)
           {
               cout << "C";
           }
           if (sum >= 55 && sum <= 59)
           {
               cout << "D+";
           }
           if (sum >= 50 && sum <= 54)
           {
               cout << "D";
           }
           if (sum <= 49 && sum >= 0)
           {
               cout << "F";
           }
        }
    }
}