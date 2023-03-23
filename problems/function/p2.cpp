
// given nyumber is even and odd
// by  if else 

/*
#include <iostream>

using namespace std;
int check(int num);

int main()
{

    int n;
    cout << " check the number is odd or even : ";
    cin >> n;
    cout << endl;

    int ans = check(n);

    // cout << ans ;

    return 0;
}

int check(int num)
{

    if (num % 2 == 0)
    {
        cout << " even number ";
        // return 'even ';
    }
    else if (num % 2 == 1)
    {

        //  return 'odd number';
        cout << " odd ";
    }
    else
    {

        //  return 'neither';
        cout << " neither even nor odd";
    }
}
*/ 




// by boolean valuue 

#include <iostream>

using namespace std;
bool checkEven( int n);
int main(){
      int n;
    cout << " check the number is odd or even : ";
    cin >> n;
    cout << endl;

    bool IsEven= checkEven(n);
    cout << IsEven << endl ;
    

}

bool checkEven( int num)
{
    if (num % 2 == 0)
    {
         return true;
    }
    else  
    {

        return false;
    }
   
}