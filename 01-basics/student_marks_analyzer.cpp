#include<iostream>
using namespace std;

int total (int marks[], int size) {

    int totalMarks = 0;

    for (int i = 0; i < size; i++) {

        totalMarks = totalMarks + marks[i];
    }
    return totalMarks ;
}

double average (int marks[], int size) {

    double totalMarks = 0;

    for (int i = 0; i < size; i++) {

        totalMarks = totalMarks + marks[i];
    }
    return totalMarks / size;
}

int highest (int marks[], int size) {

    int highest = marks[0];

    for (int i = 0; i < size; i++) {
        if (marks[i] > highest )
            highest = marks[i];
    }
    return highest;
}

int lowest (int marks[], int size) {

    int lowest = marks[0];

    for (int i = 0; i < size; i++) {
        if (marks[i] < lowest )
            lowest = marks[i];
    }
    return lowest;
}

int pass (int marks[], int size) {
    int Count = 0;

    for (int i = 0; i < size; i++) {
        if (marks[i] >= 50 && marks[i] <= 100) {
            Count++;
        }
    }
    return Count ;
}

int fail (int marks[], int size) {
    int Count = 0;

    for (int i = 0; i < size; i++) {

        if (marks[i] >= 0 && marks[i] < 50) {
            Count++;
        }
    }
    return Count ;
}

int main()
{
    int marks[10];

    cout << "Enter marks. \n" ;

    for (int i = 0; i < 10; i++) {
        cin >> marks[i];
    }
    
    cout << "Student marks:" << "\n" ;
    
    for (int i = 0; i < size; i++) {
        cout << marks[i] << "\n" ;
    }

    int tM = total (marks, 10);
    double avg = average (marks, 10);
    int hM = highest (marks, 10);
    int lM = lowest (marks, 10);
    int passed = pass (marks, 10);
    int failed = fail (marks, 10);

    cout << "The total mark is: " << tM << "\n";
    cout << "The average mark is: " << avg << "\n" ;
    cout << "The highest mark is: " << hM << " \n" ;
    cout << "The lowest mark is: " << lM << "\n" ;
    cout << "The number of students passed is: " << passed << "\n" ;
    cout << "The number of students failed is: " << failed << "\n" ;

    return 0;
}