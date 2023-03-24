//   reversse an integer

 #include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int ans=0;

    bool isNeg = false;



    if( n < 0)
    {
       isNeg = true;
       n = -n;
    }

    while(n > 0)
    {
        int digit = n % 10;
        ans = ans *10+digit;
        n= n/10;
    }

   if( isNeg)
   {
    cout<<-ans;
   }
   else{
    cout <<ans;
   }
}
