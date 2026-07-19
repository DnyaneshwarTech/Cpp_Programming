#include<iostream>
using namespace std;

int main()
{
    int Marks = 0;

    cout << "Enter your marks : ";
    cin >> Marks;

    if(Marks >= 35)
    {
        cout << "Congratulations! You are Pass." << endl;
    }
    else
    {
        cout << "Sorry! You are Fail." << endl;
    }

    return 0;
}