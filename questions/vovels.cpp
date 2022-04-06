//Find wheather the input is vovel or not(using switch case).
#include<iostream>
using namespace std;

int main(){
    char vovel;
    cout<<"Enter the Alphabet: ";cin>>vovel;
//vovels consists of "a,e,i,o,u"
    switch(vovel){
        case 'a':
            cout<<"Alphabet "<<vovel<<" is a vovel.";
            break;
        case 'e':
            cout<<"Alphabet "<<vovel<<" is a vovel.";
            break;
        case 'i':
            cout<<"Alphabet "<<vovel<<" is a vovel.";
            break;
        case 'o':
            cout<<"Alphabet "<<vovel<<" is a vovel.";
            break;
        case 'u':
            cout<<"Alphabet "<<vovel<<" is a vovel.";
            break;
        default:
            cout<<"Alphabet "<<vovel<<" is not a vovel";
            break;
    }
    return 0;
}