#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }

        i++;
    }

    if (sum == n)
        cout << n << " is a Perfect Number" << endl;
    else
        cout << n << " is not a Perfect Number" << endl;

    return 0;
} 