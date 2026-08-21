#include<iostream>
using namespace std;

int main()
{
    int iNum = 0;
    int iSum = 0;
    int iDigit = 0;

    cout << "Enter the number : ";
    cin >> iNum;

    while(iNum != 0)
    {
        iDigit = iNum % 10;
        iSum = iSum + iDigit;
        iNum = iNum / 10;
    }

    cout << "Sum of digits = " << iSum << endl;

    return 0;
}