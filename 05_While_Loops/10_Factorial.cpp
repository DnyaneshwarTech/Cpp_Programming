#include<iostream>
using namespace std;

int main()
{
    int iNum = 0;
    int iCnt = 1;
    int iFact = 1;

    cout << "Enter number : ";
    cin >> iNum;

    while(iCnt <= iNum)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    cout << "Factorial = " << iFact << endl;

    return 0;
}