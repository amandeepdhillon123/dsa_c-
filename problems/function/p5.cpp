//  check a number is prime or not 
#include<iostream>
using namespace std;
bool checkPrime(int num);
int main(){

    int n;
    cout << " Enter the value of n: ";
    cin >> n;
    cout << endl ;

    int isPrime = checkPrime(n);

    if(isPrime)
    {
        cout<<"Prime number \n";
    }
    else
    {
         cout << " not prime ";
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

