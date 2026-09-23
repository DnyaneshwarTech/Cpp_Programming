#include <iostream>
using namespace std;

int main()
{
    int n, temp, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        int fact = 1;
        int i = 1;

        while (i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if (sum == n)
        cout << n << " is a Strong Number" << endl;
    else
        cout << n << " is not a Strong Number" << endl;

    return 0;
} 