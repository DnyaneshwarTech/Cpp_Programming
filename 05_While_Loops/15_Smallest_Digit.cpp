#include<iostream>
using namespace std;

int main()
{
    int iNum = 0;
    int iDigit = 0;
    int iMin = 9;

    cout << "Enter the number : ";
    cin >> iNum;

    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNum = iNum / 10;
    }

    cout << "Smallest digit : " << iMin << endl;

    return 0;
}
