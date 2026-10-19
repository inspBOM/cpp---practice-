#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {12, 24, 36, 48, 60};

    int *z = &numbers[0];

    cout << *z << "\n";
    cout << *(z + 1) << "\n";
    cout << *(z + 2) << "\n";
    cout << *(z + 3) << "\n";
    cout << *(z + 4) << "\n";
    
    int sum = *z + *(z + 1) + *(z + 2) + *(z + 3) + *(z + 4);
    cout << "\nSum: " << sum << "\n" ;
    return 0;
}