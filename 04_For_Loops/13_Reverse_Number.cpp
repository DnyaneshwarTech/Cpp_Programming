#include<iostream>
using namespace std;

int main()
{
    int Num = 0;
    int Digit = 0;
    int Reverse = 0;

    cout << "Enter a number :"; 
    cin >> Num;

    while(Num != 0)
    {
        Digit = Num % 10;
        Reverse = Reverse * 10 + Digit;
        Num = Num / 10;
    }

    cout << "Reverse number = " << Reverse << endl; 

    return 0;
}