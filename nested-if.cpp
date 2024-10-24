#include<iostream>
using namespace std;

int main(){
     char gender;
     int exprience;
     double salary;

     cout << "Enter your gender (M/F): ";
     cin >> gender;
     cout << "Enter your experience (in years): ";
     cin >> exprience;
     

     if(gender == 'M' || gender == 'm'){
         if(exprience >= 5){
            salary = 6000;
         }else{
            salary = 5000;
         }
         cout << "Male empoylee salary: " << salary << endl;
     }else if(gender == 'F' || gender == 'f'){
        if(exprience >=5){
            salary = 5500;
        }
        else{
            salary = 4500;
        }
        cout << "Female empoylee salary: " << salary << endl;
     }else{
        cout << "Invalid gender entered." << endl;
     }
    return 0; 
}