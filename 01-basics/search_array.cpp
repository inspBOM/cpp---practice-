
#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {80,56,25,14,69,36,79,85,76,98};
    int num;
    bool found = false;

    cout << "Enter a number: " << endl;
    cin >> num;

    for (int i = 0; i < 10; i++) {
        if (num == numbers[i]) {
            cout << "Found" << endl;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Not found" << endl;
    }

    return 0;
}
