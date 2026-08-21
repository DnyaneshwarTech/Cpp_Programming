#include<iostream>
using namespace std;

int main()
{
    int iNum = 0;
    int iDigit = 0;
    int iRev = 0;

    cout << "Enter number : ";
    cin >> iNum;

    while (iNum != 0)
    {
        iDigit = iNum % 10;
        iRev = (iRev * 10) + iDigit;
        iNum = iNum / 10;
    }

    cout << "Reverse number = " << iRev << endl;

    return 0;
}