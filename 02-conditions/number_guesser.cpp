#include<iostream>
using namespace std;

int main()
{
    int num, secretNum = 8, limit = 5;

    for ( int i = 1; i < limit; i++) {
        cout << "Guess a number " << endl;
        cin >> num ;

        if ( num < secretNum ) {
            cout << "Too low" << endl;
        } else if ( num > secretNum ) {
            cout << "Too high" << endl;
        } else {
            cout << "Correct" << endl;
            break;
        }
        cout << "You have tried: " << i << " times " << endl;
    }
     
    return 0;
}