#include<iostream>
using namespace std;

int main()
{
    double mark;

    cout << "Enter your mark! " << endl;
    cin >> mark;

    if ( mark >= 0 && mark <= 49 ) {
        cout << " F " << endl;
    } else if ( mark >= 50 && mark <= 59 ) {
        cout << " D " << endl;
    } else if ( mark >= 60 && mark <= 69 ) {
        cout << " C " << endl;
    } else if ( mark >= 70 && mark <= 79 ) {
        cout << " B " << endl;
    } else if ( mark >= 80 && mark <= 100 ) {
        cout << " A " << endl;
    } else {
        cout << " Invalid mark " << endl;
    }
    return 0;
}