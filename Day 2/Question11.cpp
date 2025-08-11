#include <iostream>
using namespace std;

int main()
{
    int number;
    int row = 1;
    int ch = 'A';

    cout << "Enter a number : ";
    cin >> number;

    while (row <= number)
    {
        int col = 1;
        while (col <= number)
        {
            cout << char(ch) << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}