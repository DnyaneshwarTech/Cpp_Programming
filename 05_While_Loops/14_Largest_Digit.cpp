#include<iostream>
using namespace std;

int main()
{
    int iNum, iDigit, iLargest = 0;

    cout << "Enter number : ";
    cin >> iNum;

    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if(iDigit > iLargest)
        {
            iLargest = iDigit;
        }

        iNum = iNum / 10;
    }

    cout << "Largest digit = " << iLargest << endl;

    return 0;
}