// Draw a pattern ***
//                ***
//                ***


#include <iostream>
using namespace std;

int main (){
    int number; 
    int i = 1;
    cout << "Enter a Number : ";
    cin >> number;

    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
        
    }
    
}