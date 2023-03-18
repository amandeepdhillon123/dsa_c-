#include<iostream>

using namespace std;

int main(){

    int row;
    cout << " Enter the value of row: ";
    cin >> row;
    cout << endl;

    for(int i=0; i<row; i++)
    {
       for(int j=0; j<row+1; j++)
       {
        if(i == 0 || j == 0 || j == row-i)
        {
            cout << "* ";
        }
        else
        {
            cout<< "- ";
        }
       }
       cout << endl;
    }
}