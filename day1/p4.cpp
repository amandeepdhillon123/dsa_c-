// =========half pyramid ==================

#include<iostream>

using namespace std;

int main(){
    int row;
    cout << "Enter the vaalue:";
    cin >> row;
    cout << endl;

    for(int i=0; i< row; i++)
    {
    // for all printing star and spaces
    //     for( int j=0; j<row; j++)
    //     {  
    //         if(j<i+1)
    //         cout << "* ";
    //         else
    //         cout <<"- ";
    //     }
    //     // cout <<"- ";
    //      cout << endl;



     // for all printing only star 
        for( int j=0; j<i+1; j++)
        {  
        
            cout << "* ";
           
        }
        // cout <<"- ";
         cout << endl;
    }
   
}