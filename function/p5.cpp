#include<iostream>
using namespace std;
int maxi(int num1,int num2,int num3);
int main(){
    int a;
    int b;
    int c;
    cout << "put the value numb 1 : ";
    cin >> a;
     cout << "put the value numb 2 : ";
    cin >> b;
     cout << "put the value numb 3 : ";
    cin >> c;

    int max = maxi (a,b,c);

    cout << "maximum number is " << max ;
    return 0;

}


int maxi(int num1,int num2,int num3)
{
    if(( num1 > num2) && ( num1 >  num3) )
    {
        return num1;
    }
     else if(( num2 > num1) && ( num2 >  num3) )
    {
        return num2;
    }
    else{
        return num3;
    }
}