// fancy pattern

#include<iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter the value :";

    cin >> n;

    cout <<endl;

    for(int i=1; i<=n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout << i;
            cout<<"*";
        }
        cout << endl;
    }
    
    for(int i=1; i<=n; i++)
    {
        for (int j=0; j<n-i; j++)
        {
            cout << n-i;
          
            cout<<"*";
        }
        cout << endl;
    }

    
}
