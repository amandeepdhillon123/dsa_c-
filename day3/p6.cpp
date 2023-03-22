
//  grade 

#include<iostream>
using namespace std;
// void grade(int a);

int grade(int a)
{
   if( a >=90)
  {
    cout << " bike";
  }
  else if(a >=80)
  {
    cout << " jai ram ji ki ";
  }
  else
  {
     cout << " jai ho dfjshdfkjs ";
  }
}
int main(){

    int marks;

    cout << " Enter the marks : ";

    cin >> marks ;

    int result = grade(marks);
    // cout << result;
    return 0;

}



