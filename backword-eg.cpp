#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number , result;
input_number:
    cout << "Enter the value: ";
    cin >> number;

    if(number < 0){
        cout << "Invalid input you enter a negative number . try again "<< endl;
        goto input_number;
    }

    result = sqrt(number);
    cout << "Square root of " << number << " is: " << result << endl;
    return 0;
}