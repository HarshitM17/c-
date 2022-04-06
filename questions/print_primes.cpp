//Print prime numbers between the two input numbers.

#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"Enter first input: "<<endl;
    cin>>a;
    cout<<"Enter second input: "<<endl;
    cin>>b;

    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<b;i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            cout<<"prime number:";
            cout<<num<<endl;
        }
    }
    
    
    
    
    return 0;
}