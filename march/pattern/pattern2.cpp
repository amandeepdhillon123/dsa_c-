#include<iostream>
using namespace std;

int main(){
    
    int row;
    int col;
    cout << "Enter the row  :";
    cin >> row; 
    cout << endl;
    cout << "Enter the col  :";
    cin >> col; 
    cout << endl;

    for( int i=0; i< row; i++)
    {
        if((i==0) || (i==(row-1)))
        {
            for(int b=0; b<col; b++)
            {
                cout << "* ";
            }
        }
        else{
            cout << "* ";

            for(int c=1; c<col-1; c++)
            {
                cout << "  ";
            }
             cout << "* ";
        }
        cout << endl;
    }
    
}