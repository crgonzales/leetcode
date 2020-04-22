#include <iostream>
#include <list>
#include <iterator>
#include "Solution.h"


using namespace std;

int main() {

    while (true) {
        Solution test;

        int opt = 0;
        int userInput = 0;
        cout << "Please choose an option from the menu below." << endl;

        cout << "1. Find Happy Number" << endl;
        cout << "2. Exit" << endl;
        cout << "option: ";

        cin >> opt;

        if (opt == 1) {
            cout << "Please enter a happy number to see if it is happy: " ;
            cin >> userInput;
            cin.ignore();
            if (test.isHappy(userInput) == true)
                cout << endl << "NUMBER IS HAPPY!!!\n" << endl;
            else
                cout << endl << "NUMBER IS NOT HAPPY!!\n" << endl;


        }
        if (opt == 2) {
            cout << "Exiting. . ." << endl;
            break;

        }

    }


    return (0);
}
