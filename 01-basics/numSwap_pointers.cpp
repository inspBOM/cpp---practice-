#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int a = 15, b = 30;
    cout << a << "\n" << b << "\n" ;
    
    int *v = &a, *w = &b;
    
    swap ( *v, *w);
    
    cout << "\n" << *v << "\n" << *w << "\n" ;
    return 0;
}