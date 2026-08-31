#include<iostream>
using namespace std;

int main()
{
    int iNum = 0;
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    cout << "Enter number : ";
    cin >> iNum;

    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if((iDigit % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }

        iNum = iNum / 10;
    }

    cout << "Even digits : " << iEven << endl;
    cout << "Odd digits : " << iOdd << endl;

    return 0;
}