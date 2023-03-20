 
// full pyramid 

#include<iostream>

using namespace std;

int main(){

    int n;
    cout << " Enter the value : ";
    cin >> n;
    cout << endl ;

    for(int row=0; row< n; row++)
    {
        // for sapce 

        for( int col=0; col < n-row-1; col++)
        {
            cout << " ";
        }
            //   for star 
        for( int col=0; col < row+1; col++)
        {
            cout << "* " ;
        }
        

        cout << endl;


    }
}
