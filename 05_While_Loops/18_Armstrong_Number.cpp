#include<iostream>
using namespace std;

int main()
{
    int num, originalNum, digit = 0;
    int sum = 0;

    cout << "Enter a number : ";
    cin >> num;

    originalNum = num;

    while(num > 0)
    {
        digit = num % 10;

        sum = sum + (digit * digit * digit);

        num = num / 10;
    }

    if(originalNum == sum)
    {
        cout << originalNum << " is an armstrong number" << endl;
    }
    else
    {
        cout << originalNum << " is not an armstrong number" << endl;
    }

    return 0;
}