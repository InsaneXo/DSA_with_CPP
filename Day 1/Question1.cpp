// Question : You have a give char (eg A, B, C). You need to find the given character lie between lowercase, uppercase or a integer.

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a Character : ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase letter";
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase letter";
    }
    else{
        cout << "Integer Digit";
    }

}