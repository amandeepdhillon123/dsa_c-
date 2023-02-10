#include<iostream>

using namespace std;
void  count(int n);
int main(){
int n;
cout << "couting of number : ";
cin >> n;

 count(n);

// cout << counting;
return 0;


}

void count( int n){

    for(int i=1; i<= n; i++)
    {
     cout << i ;    }

}
