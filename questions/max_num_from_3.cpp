//Find the maximum number out of three different numbers.
// (Take input values)

#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Enter the third number: ";
    cin>>c;

    if (a>c)
    {
        if(a>b){
            cout<<"The greater number is: "<<a;
        }
        else{
            cout<<"The greater number is: "<<b;
        } 
    }
    else{
        if(b>c){
            cout<<"The greater number is: "<<b;
        }
        else{
            cout<<"The greater number is: "<<c;
        }
    }
    
    return 0;
}
