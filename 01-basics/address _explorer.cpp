#include<iostream>
using namespace std;

int main()
{
    int num = 25;
    
    cout << num << endl;
    
    cout << &num << endl;
    
    int *p = &num;
    
    cout << *p << endl;
    
    return 0;
}