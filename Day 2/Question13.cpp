#include <iostream>
using namespace std;

int main()
{
    int number;
    int row = 1;
    char ch = 'A';

    cout << "Enter a digit : ";
    cin >> number;

    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << char(ch + row - 1);
            col++;
        }
        cout << endl;
        row++;
    }
}