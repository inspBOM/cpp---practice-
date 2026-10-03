#include<iostream>
using namespace std;

int main()
{

    string name;
    int shiftsWorked, production, target, totalProduction, remainingTones;
    
    cout << "Enter your name " << endl;
    cin >> name;
    
    cout << "Enter number of shifts worked " << endl;
    cin >> shiftsWorked;
    
    cout << "Enter tones produced per shift " << endl;
    cin >> production;
    
    cout << "What's the production target " << endl;
    cin >> target;
    
    cout << "Name = " << name<< endl;
    cout << "Number of shifts = " << shiftsWorked << endl;
    cout << "Tonnes produced = " << production << endl;
    cout << "Production Target = " << target << endl;
    
    totalProduction = shiftsWorked * production ;
    remainingTones = target - totalProduction ;
    
    if ( totalProduction < target ) {
    cout << " Target not achieved! " << endl;
    cout << " Remaining tonnes to reach the target is " << remainingTones << endl;
    }
    else {
    cout << " Target achieved! " << endl;
    }
    
    
    return 0;
}