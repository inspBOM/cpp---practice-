
#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {80, 56, 25, 14, 69, 36, 79, 85, 76, 98};

    int largest = numbers[0];
    int secondLargest = numbers[0];

    for (int i = 1; i < 10; i++) {

        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] < largest &&
                 numbers[i] > secondLargest) {
            secondLargest = numbers[i];
        }
    }

    cout << "Second largest in the array: "
         << secondLargest << endl;

    return 0;
}
