

//  from digit to make number  

#include<iostream>

using namespace std;

int main(){

    int arr[] ={2,4,5,6};
    int ans=0;

    for( int i=0; i<4; i++)
    {
      ans = ans * 10 + arr[i];
    }
    cout << ans << endl ;

}