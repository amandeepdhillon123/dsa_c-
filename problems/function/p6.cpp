//  print all prime numbe from 1 to n 
#include<iostream>
using namespace std;
bool checkPrime(int num);
int main(){

    int n;
    cout << " Enter the value of n: ";
    cin >> n;
    cout << endl ;
    int isPrime = checkPrime(n);

   for( int i=2;i<=n; i++)
   {
       
    bool isiPrime =checkPrime(i);

    if(isiPrime)
    {
        cout << i<< " ";
    }
  
   
   
   }
    
}

bool checkPrime(int num)
{
    // int num =2;

    for(int i=2;i<num;i++){
        if(num % i == 0)
        return false;
    }
    return true;
}

