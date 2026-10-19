#include<iostream>
using namespace std;

double average (int num[], int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total = total + num[i];
    }
    return total / size;
}
int main()
{
    int num[10] = {55, 85, 69, 96, 80, 99, 100, 47, 9, 8};
    
    cout << "The average is: " << average (num, 10);
    return 0;
}