#include<iostream>
using namespace std;

int main(){

    int rowe;
    int cole;

    cout << " Enter the row:";

    cin >> rowe;
    cout << endl ;  
     cout << " Enter the col:";

    cin >> cole;
    cout << endl ; 

      for( int row=0; row<rowe; row++)
      {
        for(int col=0; col<cole; col++)
        {
            cout << "* ";
        }
        cout << endl;
      }
}