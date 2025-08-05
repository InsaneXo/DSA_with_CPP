// Draw a pattern 1 1 1
//                2 2 2
//                3 3 3


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
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
        
    }
    
}