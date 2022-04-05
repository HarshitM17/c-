//for getting the sum of natural numbers till the entered number of index.

#include<iostream>
using namespace std;

int main(){
    //using three variables one for index,2nd for initializing,3rd for additioning of numbers or sum.

    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum+counter; 
    }
    cout<<"Answer: "<<sum;

    return 0;
}