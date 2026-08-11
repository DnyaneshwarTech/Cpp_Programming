#include<iostream>
using namespace std;

int main()
{
    int iNo = 0;
    int iCnt = 0;

    cout << "Enter number : ";
    cin >> iNo;

    cout << "Factors of " << iNo << " are : ";
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout << "\n" << iCnt;
        }
    }

    cout << "\n";

    return 0;
}