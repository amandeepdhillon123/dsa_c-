

//  binary  tp decimal 

//  divison method 


#include<iostream>
#include<cmath>

using namespace std;

int binaryToDecimal(int num);

int main(){
   int n;
   cout << " Enter the value of N:";
   cin >> n;

   int binary = binaryToDecimal(n);

   cout << binary << endl;

}

int binaryToDecimal(int num)
{
    int binaryno =0;
    int i=0;
    while( num > 0)
    {

        int bit = num % 10;
     
        cout << bit << endl;
        binaryno =     binaryno +bit*pow(2, i++)   ;
         num = num  / 10 ;

         
    

      
    }

    //    cout << binaryno;

    return binaryno;
}