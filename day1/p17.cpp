// numeric palindrome 

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
        int ans= col + 1;
        char ch= ans +'A' -1;
        cout << ch << " ";
    }
//  for reverse coutning
    for(col=i; col>=1; col--)
    {
         int ans= col ;
        char ch= ans + 'A' - 1;
        cout << ch << " " ;
    }
    cout << endl;
    }
    
}
