#include<iostream>
using namespace std;

int main(){
    int marks;

    cin >> marks ;

    if(marks >= 90)
    {
        cout << "bike milegi";
    }
     else if(marks >= 80)
    {
        cout << "laptop milegi";
    }
    else if(marks >= 70)
    {
        cout << "phone milegi";
    }
    else if(marks >= 60)
    {
        cout << "cycle milegi";
    }

    else{
        cout << "kuch nehi milega";
    }


}
