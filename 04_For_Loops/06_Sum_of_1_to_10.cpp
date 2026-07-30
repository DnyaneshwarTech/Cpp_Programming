#include<iostream>
using namespace std;

int main()
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    cout << "Sum of numbers from 1 to 10 is : " << iSum << endl;

    return 0;
}