#include <iostream>
using namespace std;
int main()
{
  
     cout << "put the value for half pyramid ";
       int n;
    cin >> n;

   
    for (int i = n ; i >= 0; i--)

    {
        for (int j = 0; j < i ; j++)
        {
            cout << "* ";
        }
        cout << endl; 
    }
}