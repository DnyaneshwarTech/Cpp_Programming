#include<iostream>
using namespace std;

int main()
{
    int iCnt = 1;
    int iNum = 0;

    cout << "Enter a number : ";
    cin >> iNum;

    while(iCnt <= 10)
    {
        cout << iNum * iCnt << endl;
        iCnt++;
    }


    return 0;
}