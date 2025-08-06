// Draw a pattern 1 2 3
//                1 2 3
//                1 2 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cout << "Enter a digit : ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}