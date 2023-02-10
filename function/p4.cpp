#include <iostream>

using namespace  std;
int subt(int num1, int num2)
{
    int mull =num1 - num2;
    return mull ;
}

int main(){

    int a;
    int b;
    cout << "enter the value of a";
    cin >> a;
     cout << "enter the value of b";
    cin >> b;

    int sub = subt ( a ,b );
    cout << sub ;
    return 0;
}