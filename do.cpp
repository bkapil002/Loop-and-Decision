#include<iostream>
using namespace std;

int main(){
    int n, i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    do{
        cout << i << " ";
        i++;
    }while(i <= n);

    cout << endl;
    return 0;
}