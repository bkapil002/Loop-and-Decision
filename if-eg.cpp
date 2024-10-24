#include<iostream>
using namespace std;

int main(){
    int number ;
    cout << "Enter a number: ";
    cin >> number;

    if( number >= 90){
        cout << "Gread : A" <<endl;
    }
    if( number >= 80 && number < 90){
        cout << "Gread : B" <<endl;
    }

    if( number >= 70 && number < 80){
        cout << "Gread : C" <<endl;
    }
    if( number >= 60 && number < 70 ){
        cout << "Gread : D" <<endl;
    }
    if( number < 60){
        cout << "Gread : E" <<endl;
    }
    return 0;
}