#include<iostream>
using namespace std;

int main()
{
    string name;
    int target,numHrs, hours;

    cout << " What is your name? " << endl;
    cin >> name;

    cout << " How many hours have you studied? " << endl;
    cin >> numHrs;

    cout << " What is your target? " << endl;
    cin >> target;

    cout << "Name = " << name << "\n";
    cout << "Hours studied = " << numHrs<< "\n";
    cout << "Target = " << target << "\n";

    hours = target - numHrs;
    if ( numHrs < target ) {
        cout << "Target not achieved."  << "\n You still need " << hours << " hours "  << endl;
    } else if ( numHrs > target || numHrs == target) {
        cout << "Hello " << name << "!"<< endl;
        cout << "You studied for " << numHrs << " hours."  << endl;
        cout << "Your target was "<< target << " hours. " << endl;
        cout << "Target achieved!" << endl;
    }

    return 0;
}