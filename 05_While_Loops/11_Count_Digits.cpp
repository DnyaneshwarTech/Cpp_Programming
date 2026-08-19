#include<iostream>
using namespace std;

int main()
{
    int iNum = 0;
    int iCnt = 0;

    cout << "Enter number : ";
    cin >> iNum;

    while (iNum != 0)
    {
        iNum = iNum / 10;
        iCnt++;
    }

    cout << "Number of digits = " << iCnt << endl;

    return 0;
}