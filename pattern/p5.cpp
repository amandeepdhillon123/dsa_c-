#include<iostream>
using namespace std;

int main(){
    int rows;
    
cout << "rows are:" <<endl;


cin >> rows;


for(int i=0; i<rows; i++)
{
    if(i == 0 || i == rows-1)
    {
        for (int r = 0; r < rows; r++)
        {
             cout << "* ";
        }
        
      
    }
    else{
        cout << "* ";

        for(int j=0; j<rows-2; j++)
        {
            cout << "  ";
        }

        cout << "* ";

        // cout << "ran";
    }
    cout << endl;
}









}