#include<iostream>
using namespace std;

int main()
{
    int iNo = 0;
    int iCnt = 0;
    int iCount = 0;

    cout << "Enter number : ";
    cin >> iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }
    }

    if(iCount == 2)
    {
        cout << iNo << " is a prime number\n";
    }
    else
    {
        cout << iNo << " is not a prime number\n";
    }

    return 0;
}