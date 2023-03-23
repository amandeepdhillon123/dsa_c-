//  find the factorial of number 

#include <iostream>

using namespace std;
 int factorial ( int n);
int main(){
      int n;
    cout << " check the number is odd or even : ";
    cin >> n;
    cout << endl;

    int fact = factorial(n);
}

 int factorial ( int num)
 {
   int facti = 1;

   for( int i=1; i<= num; i++)
   {
    facti =facti*i;

   }

   cout << facti << endl;

 }