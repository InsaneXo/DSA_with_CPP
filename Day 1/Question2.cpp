// Question : Find the sum of all even number

#include <iostream>
using namespace std;

int main(){
    int number;
    int i = 2;
    int sum = 0;
    cout << "Enter a digit : ";
    cin >> number;

    while (i <= number){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }

    cout << "The Sum of even : " << sum;
}