#include<iostream>
using namespace std;

int main()
{
    int Marks = 0;

    cout << "Enter your marks : ";
    cin >> Marks;

    if(Marks >= 75)
    {
        cout << "Distinction" << endl;
    }
    else if(Marks >= 60)
    {
        cout << "First Class" << endl;
    }
    else if(Marks >= 50)
    {
        cout << "Second Class" << endl;
    }
    else if(Marks >= 35)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}