#include<iostream>
using  namespace std;

int main(){
    int n , number , sum = 0;

    cout<< "Enter the number of (N): ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++){
        cout << "Enter element "<< i << " : "<< endl;
        cin >> number;

        if(number <= 0){
            cout << "Invalid input. please enter a positive number. "<< endl;
            continue;
        }

        sum += number;
    }
    cout << "Sum of positive number: "<< sum << endl;

    return 0;
}