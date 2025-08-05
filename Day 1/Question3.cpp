// Question : Fahrenheit to ceisius

#include <iostream>
using namespace std;

int main()
{
    int number;
    float i = 0;
    cout << "Enter a Fahrenheit to print ceisius table : ";
    cin >> number;

    while (i <= number)
    {
        cout << i << " Fahrenheit" << " in Ceisius : "<< (i - 32) * 5/9 << endl;
        i++;
    }
    
}