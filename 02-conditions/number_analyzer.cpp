#include<iostream>
using namespace std;

int main()
{
    int countPos = 0,countNeg = 0,countZero = 0,number;
    for(int i = 0; i<5; i++) {
        cout << " Enter number: ";
        cin >> number;
        if(number < 0) {
            countNeg++;
        } else if (number > 0) {
            countPos++;
        } else if(number == 0) {
            countZero++;
        }
    }
    cout << "Positive numbers : " << countPos << endl;
    cout << "Negative numbers: " << countNeg << endl;
    cout << "Zeros: " << countZero << endl;

    return 0;
}