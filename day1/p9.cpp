#include<iostream>
using namespace std;

int main()
{

    int row;
    cout << "Enter the value row : ";

    cin >> row;
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j == 0 || i == j || i == row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}