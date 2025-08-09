#include <iostream>
using namespace std;

int main()
{
    int number;
    int row = 1;

    cout << "Enter a digit : ";
    cin >> number;

    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}