

//  silid flipped pyramid 
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the value of N:";

    cin >> n;

    for( int row=0; row<n; row++)
    {
        // for star 

        for( int col=0; col< n-row; col++)
        {
            cout << "* ";
        }
//  for space 
        for( int col=0; col< 2*row+1; col++)
        {
            cout << "  ";
        }


// for start 

        for( int col=0; col< n-row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }


    for( int row=0; row<n; row++)
    {

        // for star
        for( int col=0; col< row+1; col++)
        {
            cout << "* ";
        }
    //   for space
        for( int col=0; col< 2*n- 2*row -1; col++)
        {
            cout<<"  ";
        }
//  for star 
        for( int col=0; col< row+1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}