//  hollow reactangle 

#include <iostream>

using namespace std;

int main(){
    
    int row;
    cout << " Enter the value of row: ";

    cin >> row;

    int col;
    cout << " Enter the value of col: ";

    cin >> col;

    for( int i=0;i<row;i++)
    {
        if(i==0 || i== row-1)
        {
            for(int j=0;j<col;j++)
            {
                  cout<<"* ";
            }
        }
        else{
            cout <<"* ";
            for(int m=0;m<col-2;m++)
            {
                cout<< "  ";
                
            }
            cout <<"* ";
        }
        cout << endl;
    }

}