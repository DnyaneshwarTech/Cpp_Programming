#include<iostream>
using namespace std;

int main()
{
    int No1 = 0;
    int No2 = 0;

    cout <<"Enter first number : ";
    cin >> No1;

    cout <<"Enter second number : ";
    cin >> No2;

    cout << boolalpha;

    cout << No1 << " == " << No2 << " : " << (No1 == No2) << endl;
    cout << No1 << " != " << No2 << " : " << (No1 != No2) << endl;
    cout << No1 << " > " << No2 << " : " << (No1 > No2) << endl;
    cout << No1 << " < " << No2 << " : " << (No1 < No2) << endl;
    cout << No1 << " >= " << No2 << " : " << (No1 >= No2) << endl;
    cout << No1 << " <= " << No2 << " : " << (No1 <= No2) << endl;

    return 0;
}