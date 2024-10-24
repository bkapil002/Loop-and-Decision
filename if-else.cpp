#include<iostream>
using namespace std;

int main(){

    int number;

    cout << "Enter a number between 1 and 100: ";
    cin >> number;

    if(number >= 2){
        cout<<"this is the if value"<<endl;
    }
    else{
        cout<<"this is the else value"<<endl;
    }

    return 0; 
}