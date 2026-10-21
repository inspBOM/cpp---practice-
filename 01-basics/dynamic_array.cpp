#include<iostream>
using namespace std;

int main()
{
    int num ;

    cout << "How many numbers do you want to store? \n" ;
    cin >> num;

    if (num <= 0) {
        cout << "Enter a positive number.\n";
        return 1;
    }

    cout << "Enter all the numbers. " << "\n" ;

    int* arr = new int[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    cout << "Your numbers are: " << "\n" ;
    for (int i = 0; i < num; i++) {
        cout << arr[i] << "\n" ;
    }
    delete[] arr;
    return 0;
}