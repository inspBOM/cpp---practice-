#include <iostream>
using namespace std;

int square(int a) {
    return a * a;
}

int main()
{
    int num;

    cout << "Enter a number! " << endl;
    cin >> num;

    cout << "The square of this number is: " << square(num) << endl;

    return 0;
}