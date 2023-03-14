#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << " Enter the score :" << endl ;

    cin >> marks;

    if(marks>= 90)
    {
        cout << "u will get bike";
    }
      else if(marks>= 80)
    {
        cout << "u will get cycle";
    }
      else if(marks>= 70)
    {
        cout << "u will get books";
    }
    else{
         cout << "u will get nothing";
    }
}