#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iSum = 0;
    int iCnt = 0;

    cout << "Enter the number : "<< endl;
    cin >> iValue;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    cout << "Sum of odd numbers : " << iSum << endl;

    return 0;
}