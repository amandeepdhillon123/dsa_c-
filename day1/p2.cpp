// solid square

#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<" Enter the value of row:";

    cin >> row;
    cout << endl;


    for(int i=0; i<row; i++)
    {
       for(int i=0; i<row; i++)
    {
       cout << "* ";
    }

    cout << endl; 
    }
}