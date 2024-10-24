#include<iostream>
using namespace std;

int main(){
    int number;

    sum:
    cout << "Enter the positive value";
    cin >> number;

    if(number < 0){
        cout << "invslid input , please enter a positive value "<< endl;
        goto sum;
    }
    
    cout << "your enter a positive  number: "<< number << endl;

    return 0; 
}