#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num != 1){
        goto skip;
    }

    cout << "you chose to contiue " <<endl;
    cout<<"executing the main block of code "<<endl;

    skip:
    cout <<"you have reached the end of the program "<< endl;
    return 0; 
}