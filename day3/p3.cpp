#include<iostream>

using namespace std;
int sub ( int a, int b){
 
 int result =(a - b);
 return result ;

}
int multi( int a, int b){
 
 int result =(a * b);
 return result ;

}

int main(){
  int a;
  cout << "Enter tha value of a :";
   cin >> a;
   cout << endl;


   int b;
  cout << "Enter tha value of b :";
   cin >> b;
    cout << endl;

    int sum = sub(a,b);
    int mult = multi(a,b);

    cout << sum << endl;
     cout << mult << endl;











    

}