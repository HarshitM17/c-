#include<iostream>
using namespace std;

int main(){
    char alpha;
    //  alpha stands for alphabet.
    cout<<"Enter Alphabet: "<<endl;cin>>alpha;

    switch (alpha)
    {
    case 'a':
        cout<<"Apple";
        break;
    case 'b':
        cout<<"Banana";
        break;
    case 'c':
        cout<<"Cat";
        break;
    case 'd':
        cout<<"Dog";
        break;
    case 'e':
        cout<<"Elephant";
        break;
    case 'f':
        cout<<"Frog";
        break;
    case 'g':
        cout<<"Google";
        break;
    case 'h':
        cout<<"Happy";
        break;
    case 'i':
        cout<<"India";
        break;
    case 'j':
        cout<<"Joker";
        break;
    
    default:
        cout<<"Enough for today we will catch-up next time A.S.A.P:)";
        break;
    }
}