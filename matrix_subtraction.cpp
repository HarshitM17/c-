#include<iostream>
using namespace std;

int main(){
	int h,a,r,s,first[10][10], second[10][10], sub[10][10];
	
	cout<<"Req no of rows: ";
	cin>>h;
	
	cout<<"Req no of columns: ";
	cin>>a;
	
	cout << endl << "Enter elements of 1st matrix: " << endl;
	
	for(r=0;r<h;++r)
		for (s=0;s<a;++s)
		{
			cout << "Enter element of first_matrix_" << r + 1 << s + 1 << " : ";
			cin >> first[r][s];
		}
		
	cout << endl << "Enter elements of 2nd matrix: " << endl;
	
	for(r=0;r<h;++r)
		for (s=0;s<a;++s)
       {
           cout << "Enter element second_matrix_" << r + 1 << s + 1 << " : ";
           cin >> second[r][s];
       }
    
    
    for(r = 0; r<h; ++r)
        for(s = 0; s < a; ++s)
            sub[r][s] = first[r][s]-second[r][s];
            
    cout << endl << "Sub of two matrix is: " << endl;
    
    for(r = 0; r<h; ++r)
        for(s = 0; s < a; ++s)
        {
            cout << sub[r][s] << "  ";
            if(s == a - 1)
                cout << endl;
        }
    return 0;
	
}