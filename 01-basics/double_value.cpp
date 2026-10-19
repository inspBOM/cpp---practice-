#include<iostream>
using namespace std;

void doubleValue(int *a) {
    *a = *a * 2;
}

int main() {
    int num = 20;

    cout << num << "\n";

    doubleValue(&num);

    cout << num << "\n";

    return 0;
}