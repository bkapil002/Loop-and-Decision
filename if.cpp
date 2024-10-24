#include<iostream>
using namespace std;

int main(){
    int number ;
    cout << "Enter a number: ";
    cin >> number;

    if(number > 5){
        cout << "The number is greater than 5." << endl;
    }
    if(number < 5){
        cout << "The number is less than 5." << endl;
    }
    if(number == 5){
        cout << "The number is equal to 5." << endl;
    }
    return 0;
}