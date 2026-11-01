#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {4, 7, 4, 2, 9, 4, 7, 1, 4, 9};
    int num, countApp = 0;

    cout << "Please enter a number " << endl;
    cin >> num;

    for (int i = 0; i < 10; i++ ) {

        if (num == numbers[i])
        {
            countApp++;
        }
    }

    if (countApp == 0) {
        cout << "Not found" << endl;
    }

    cout << "Occurences: " << countApp << endl;

    return 0;
}