#include <iostream>

using namespace std;
int main()
{
    int row;
    cout << " Enter the row :";
    cin >> row;

    for(int i=0; i<row; i++)
    {
       for(int b=0; b<i+1; b++)
       {
        cout << (b+1) << " ";
       }
         cout <<endl;
    }
  
}