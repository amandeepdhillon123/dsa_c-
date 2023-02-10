#include <iostream>

using namespace  std;
int mul(int num1, int num2)
{
    int mull =num1 * num2;
    return mull ;
}

int main(){

    int a;
    int b;
    cout << "enter the value of a";
    cin >> a;
     cout << "enter the value of b";
    cin >> b;

    int mult = mul ( a ,b );
    cout << mult ;
    return 0;
}