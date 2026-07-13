#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<< "Enter the first number : ";
    cin>> iNo1;

    cout<< "Enter the second number : ";
    cin>> iNo2;

    cout<<endl;

    cout<<"Logical Operators Result : "<<endl<<endl;

    cout<<"(1 = True, 0 = False)"<<endl<<endl;

    cout<<"Logical AND (&&) : "<<((iNo1 > 0) && (iNo2 > 0))<<endl;
    cout<<"Logical OR (||) : "<<((iNo1 > 0) || (iNo1 > 0))<<endl;
    cout<<"Logical NOT (!) : "<<!(iNo1 > 0)<<endl;

    return 0;
}