#include<iostream>
using namespace std;

int main()
{
    int iCnt = 2;
    int iSum = 0;

    while(iCnt <= 10)
    {
        iSum = iSum + iCnt;
        iCnt = iCnt + 2;
    }

    cout << "Sum of even numbers = " << iSum << endl;

    return 0;
}