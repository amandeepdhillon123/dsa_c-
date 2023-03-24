// decimal to binary 

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

        int bit = num & 1;
     
        cout << bit << endl;
        binaryno = bit*pow(10, i++) +  binaryno  ;
         num = num >> 1 ;

         
    

      
    }

    //    cout << binaryno;

    return binaryno;
}