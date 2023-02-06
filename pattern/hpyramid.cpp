#include<iostream>

using namespace std;

int main(){

    int n;

    cout << " put the value : ";
    cin >> n;

    for(  int row=1; row <=n; row++)
    {
        for( int colm =1; colm <=n; colm++)
        {
            if(colm==1 || row == colm || row == n)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}