#include<iostream>
using namespace std;

int main()
{
    int iAge = 0;

    cout << "Enter your age : ";
    cin >> iAge;

    if(iAge >= 18)
    {
        if(iAge >= 60)
        {
            cout << "You are a Senior Citizen." <<endl;
        }
        else
        {
            cout << "You are an Adult." << endl;
        }
    }
    else
    {
        cout << "You are a Minor." << endl;
    }

    return 0;
}