#include<iostream>
using namespace std;

int main(){
    int N , sum=0;

    cout <<"Enter the value: ";
    cin >> N;

    for(int i = 0 ; i <=N ; i++){
        if( i >= 7 ){
            cout << "stopping at the end of data";
            break;
        }
        sum += i;
    }

    cout << "sum of number is: "<< sum;

    return 0;
}