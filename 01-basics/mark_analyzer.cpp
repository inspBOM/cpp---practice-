#include<iostream>
using namespace std;

double average (int marks[], int size ) {
    int totalMarks = 0;

    for (int i = 0; i < size; i++) {
        totalMarks = totalMarks + marks[i];
    }
    return totalMarks / size;
}

int aboveAverage (int marks[], int size, double avg) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (marks[i] > avg) {
            count++;
        }
    }
    return count;
}
int main()
{
    int marks [5];

    cout << "Enter five different marks! " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks [i];
    }

    double avg = average (marks, 5);

    int above = aboveAverage (marks, 5, avg);

    cout << "The average = " << avg << endl;
    cout << "Marks above average = " << above << endl;

    return 0;
}