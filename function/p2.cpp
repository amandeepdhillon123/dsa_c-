// add two number  function 

#include <iostream>
using namespace std;

int add(int a, int b)
{
    int result = a + b;

    return result;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;

    int sum = add(a, b);
    cout << sum;
    return 0;
}