#include<iostream>
using namespace std;

int main()
{
    int iNo = 5;
    int iMult = 0;
    int iCnt = 0;

    cout << "Table of : " << iNo << endl;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        cout << iMult << endl;
    }

    return 0;
}