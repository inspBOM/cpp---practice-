#include<iostream>
using namespace std;

bool isEven ( int a ) {
    if ( a % 2 == 0)
        return true;
    else
        return false ;

}

int main()
{
    int num;

    cout << "Enter a number: \n" ;
    cin >> num;

    cout << "Is the number an even value? \n" ;
    if ( isEven ( num ) == true ) {
        cout << "It is even! \n" ;
    }
    else
    {
        cout << "It is odd! \n" ;
    }
    return 0;
}
