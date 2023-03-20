// fancy pattern

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the value :";

    cin >> n;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
    
    int col;

    for(col=0; col<i+1; col++)
    {
        cout << col+1;
    }
//  for reverse coutning
    for(col=i; col>=1; col--)
    {
        cout << col;
    }
    cout << endl;
    }
    
}
