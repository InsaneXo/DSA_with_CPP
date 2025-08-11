#include <iostream>
using namespace std;

int main()
{
    int number;
    int row = 1;

    cout << "Enter an digit : ";
    cin >> number;

    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1  << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}