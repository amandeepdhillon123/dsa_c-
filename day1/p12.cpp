 
// full pyramid 

#include<iostream>

using namespace std;

int main(){

    int n;
    cout << " Enter the value : ";
    cin >> n;
    cout << endl ;
//   full pyramid 
    for(int row=0; row< n; row++)
    {
        // for sapce 

        for( int col=0; col < n-row-1; col++)
        {
            cout << " ";
        }
            //   for star 
        for( int col=0; col < row+1; col++)
        {
            cout << "* " ;
        }
        

        cout << endl;

    


    }

        // inverted pyramid 

         for(int row=0; row< n; row++)
    {     

         // for sapce 

        for( int col=0; col < row; col++)
        {
            cout << " ";
        }
          //   for star 5


           for( int col=0; col <n-row; col++)
        {
            cout << "* " ;
        }

       
          
     
        

        cout << endl;


    }
}
