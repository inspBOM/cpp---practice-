#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {80,56,25,14,69,36,79,85,76,98};
    int countEven = 0, countOdd = 0;

    for (int i = 0; i < 10; i++) {
        
            if (numbers[i] % 2 == 0) {
                countEven++;
            }

        if (numbers[i] % 2 != 0) {
            countOdd++;
        }
    }
    cout << "The number of even numbers is: " << countEven << endl;
    cout << "The number of odd numbers is: " << countOdd << endl;
    return 0;
}