#include<iostream>
using namespace std;

int main()
{
    int num = 10;

    cout << num << endl;

    int *p = &num;

    *p = 50;

    cout << *p << endl;

    return 0;
}