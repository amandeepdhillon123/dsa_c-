

// area of circle 

#include<iostream>
using namespace std;
 float  circle_area( float radius);
int main(){
    float radius ;
    cout << " enter value of radius :";
    cin >> radius ;
    cout << endl;

    float area = circle_area(radius);

    cout << area<< endl ;
}

 float  circle_area( float radius){

    float area = 3.14 * radius * radius ;
    return area ;

 }