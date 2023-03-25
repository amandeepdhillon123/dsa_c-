#include<iostream>
using namespace std;

int main(){

    int arr[500];

    int n;
    cout << " enter the value of array : " << endl;
     
     cin >> n;

       cout << " enter the numbers : " << endl;
    
   for(int i=0; i<n; i++)
   {
    cin >> arr[i];
   }

    cout << " printing the double value of array : ";

    for( int i=0; i<n; i++)
    {
        cout << 2 * arr[i] << " ";
    }

    return 0;
}