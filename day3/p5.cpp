

//  counting from 1 to N

#include<iostream>

using namespace std;
 int count(int a);
int main(){

     int n;
     cin >> n;

     int counting =count(n);

     cout << counting ;

}

int count(int a)
{
    // int number = 1;

    for( int i=1; i<a; i++)
    {
 
       cout << i << " ";
    }
}