#include<iostream>

using  namespace std;



int main(){

    int row;
cout << " Enter the value of row: ";
cin >> row;
cout << endl;

 int col;
cout << " Enter the value of row: ";
cin >> col;
cout << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
   cout << "* ";
        }
       cout << endl;
    }
  
}