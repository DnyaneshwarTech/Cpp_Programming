#include<iostream>
using namespace std;

int main()
{
    int iCnt = 0;

    cout << "Printing even numbers from 1 to 100:" <<endl;

    for(iCnt = 1; iCnt <= 100; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            cout << iCnt << endl; 
        }
    }

    return 0;
}