#include<iostream>
using namespace std;
int findLargest ( int a, int b, int c ) {
    if ( a > b && a > c )
        return a ;

    if ( a < b && b > c )
        return b;

    else
        return c;
}
int main()
{
    int x, y, z;

    cout << "Enter three numbers. \n" ;
    cin >> x >> y >> z;

    cout << "The largest number is : " <<findLargest ( x, y, z );

    return 0;
}