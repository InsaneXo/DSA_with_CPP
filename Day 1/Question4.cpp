// Question Print a Prime No.

#include <iostream>
using namespace std;

int main()
{
    int number;
    int i = 2;

    cout << "Enter a digit : ";
    cin >> number;

    while (i < number)
    {
        if (number % i == 0)
        {
            cout << number << " is Not Prime for " << i << endl;
        }
        else
        {
            cout << number << " is Prime for " << i << endl;
        }

        i++;
    }
}