#include <iostream>

using namespace std;
int main()
{
    int row;
    cout << " Enter the row :";
    cin >> row;

    for(int i=0; i<row; i++)
    {
       for(int b=0; b<row-i; b++)
       {
        cout << "* ";
       }
         cout <<endl;
    }
  
}


// int main()
// {
//     int row;
//     cout << " Enter the row :";
//     cin >> row;

//     for(int i=row; i>=0; i--)
//     {
//        for(int b=0; b<i; b++)
//        {
//         cout << "* ";
//        }
//          cout <<endl;
//     }
  
// }

