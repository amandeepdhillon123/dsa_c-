

//  find max 3 numbers

#include <iostream>

using namespace std;

// int maxNumber(int a, int b, int c);

int maxNumber(int a, int b, int c)
{
    if (a >= b && a >= c)
    
        return a;
    
    else if (b >= a && b >= c)
    
       return b;
    
    else
    
        return c;
    
}

int main()
{

    int a, b, c;

    cout << " Enter the value of three numbers:" << endl;
    cin >> a;
    cout << endl;
    cin >> b;
    cout << endl;
    cin >> c;
    cout << endl;

    int maximum = maxNumber(a, b, c);

    cout << "maximum number is : " << maximum;
}


