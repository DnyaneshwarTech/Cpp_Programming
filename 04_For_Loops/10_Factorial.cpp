#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iFact = 1;
    int iCnt = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    cout << "Factorial is : " << iFact << endl;

    return 0;
}