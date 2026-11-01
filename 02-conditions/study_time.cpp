#include<iostream>
using namespace std;

int main()
{
    string name;
    int numHrs, minutes, totalMins;

    cout << "What is your name?" << endl;
    cin >> name;

    cout << "How many hours have you studied today?" << endl;
    cin >> numHrs;

    cout << "How many minutes?" << endl;
    cin >> minutes;

    totalMins = numHrs * 60 + minutes;

    cout << "Name = " << name << endl;
    cout << "Hours = " << numHrs << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Hello " << name << ", you have studied for "
         << numHrs << " hours and " << minutes
         << " minutes today." << endl;
    cout << "That is " << totalMins
         << " minutes in total." << endl;

    return 0;
}