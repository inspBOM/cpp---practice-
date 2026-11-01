#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter age" << endl;
    cin >> age;

    if ( age > 0 && age < 13 ) {
        cout << "You're a child" << endl;
    } else if ( age >= 13 && age <= 19 ) {
        cout << "You're a teenager" << endl;
    } else if ( age > 20 ) {
        cout << "You're an adult" << endl;
    } else {
        cout << "Invalid option" << endl;
    }
    return 0;
}