//Make a calculator using switch case.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the first number: ";cin>>a;
    cout<<"Enter the second number: ";cin>>b;
    
    char op;
    cout<<"Enter the operation to get performed: ";cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Answer is: "<<a+b<<endl;
        break;
    case '-':
        cout<<"Answer is: "<<a-b<<endl;
        break;
    case '*':
        cout<<"Answer is: "<<a*b<<endl;
        break;
    case '/':
        cout<<"Answer is: "<<a/b<<endl;
        break;
    default:
        cout<<"Incorrect input!!";
        break;
    }
    return 0;
}