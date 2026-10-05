#include<iostream>
using namespace std;

int main()
{
    double average, mark [5];
    double highest, totalMarks = 0, lowest;
    int countPassed = 0, countFailed = 0;
    highest = 0;
    lowest = 100;



    for ( int i = 0; i < 5; i++ )
    {
        {
            {
                {
                    cout << "Enter five different marks. " << endl;
                    cin >> mark[i];

                    if ( mark[i] >= 50 && mark[i] <= 100 ) {
                        countPassed ++;
                    }
                    else if ( mark[i] < 50 && mark[i] >= 0 ) {
                        countFailed++;
                    }
                    else {
                        cout << "Invalid mark!" << endl;
                        continue ;
                    }

                    totalMarks = totalMarks + mark[i];

                }


                if ( mark[i] > highest ) {
                    highest = mark [i];
                }
            }

            if ( mark[i] < lowest ) {
                lowest = mark [i];
            }

        }

    }
    
    average = totalMarks / 5;
    
    cout << "Number of students that passed: " << countPassed << endl;
    cout << "Number of students that failed: " << countFailed << endl;
    cout << "The average mark: " << average << endl;
    cout << "The total of all marks: " << totalMarks << endl;
    cout << "The highest mark is: " << highest << endl;
    cout << "The lowest mark is: " << lowest << endl;

    return 0;
}