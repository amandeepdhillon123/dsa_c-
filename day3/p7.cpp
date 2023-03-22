#include<iostream>
using namespace std;


int evenSum(int a);
int main(){

    int n ;
    cin >> n;

    int sum = evenSum(n);

    cout << sum << endl;

}

int evenSum(int a)
{
    int sum =0;

    for(int i=0; i<=a; i++)
    {
        if( i%2==0)
        {
            sum= sum+i;
        }
        else{
            continue;
        }
    }

    return sum;
}

