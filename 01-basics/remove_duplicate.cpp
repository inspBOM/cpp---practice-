#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {4, 7, 4, 2, 9, 7, 1, 4, 9, 5};

    cout << "Distinct numbers \n" ;

    for (int i = 0; i < 10; i++) {

        bool duplicate = false ;

        for (int j = 0; j < i; j++) {

            if (numbers[i] == numbers[j]) {
                duplicate = true ;
                break ;
            }
        }

        if (duplicate == false) {
            cout << numbers[i] << endl;
        }
    }
    return 0;
}