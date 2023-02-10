#include<iostream>

using namespace std;
void grade( int num1);

int main()
{
    int n;
    cout << "numbaer is : ";
    cin >> n;

    grade(n);
    return 0;
}

void  grade( int num1){
    if( num1 > 90)
    {
        cout << "bike";
    }
    else
    {
        cout <<" kuch n ehi milega";
    }
}