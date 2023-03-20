// hollow diamond 

 #include<iostream>

using namespace std;

int main(){

    int n;
    cout << " Enter the value : ";
    cin >> n;
    cout << endl ;

    for(int row=0; row< n; row++)
    {
        // for sapce 

        for( int col=0; col < n-row-1; col++)
        {
            cout << " ";
        }
            //   for star 
        for( int col=0; col < row+1; col++)
        {
            if( col== 0 || col == row)
            {
                cout << "* ";
            }
            else{
                cout <<"  ";
            }
        }
       

        cout << endl;


    }

    for( int row=0; row<n; row++)
    {
        // sapce

         for( int col=0; col < row; col++)
        {
            cout << " ";
        }
          //   for star 5


           for( int col=0; col <2*n-2*row-1; col++)
        {
          if(col ==0 || col == 2*n-2*row-2)
          {
            cout << "* ";
          }
          else
          {
            cout <<" ";
          }
        }

        cout << endl;


    }


}

