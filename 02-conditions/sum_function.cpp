#include<iostream>
using namespace std;

int sum (int num[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total = total + num[i];
    }
    return total;
}
int main()
{
    int num[10] = {55, 85, 69, 96, 80, 99, 100, 47, 9, 8};
    
    cout << "The sum is: " << sum (num, 10);
    return 0;
}