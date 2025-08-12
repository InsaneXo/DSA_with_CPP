#include <iostream>
using namespace std;

int main()
{
    int number;
    int row = 1;
    char ch = 'A';
    int count = 1;

    cout << "Enter a digit : ";
    cin >> number;

    while (row <= number)
    {
        int col = 1;

        while (col <= row)
        {
            cout << char(ch + count - 1) << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}