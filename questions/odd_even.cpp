//Find the entered number is even or odd by taking an input number.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a%2==0){
        cout<<"The number "<<a<<" is an even number.";
    }
    else{
        cout<<"The number "<<a<<" is an odd number.";
    }

    return 0;
}