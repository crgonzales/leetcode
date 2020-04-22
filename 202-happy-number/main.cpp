#include <iostream>
#include <list>
#include <iterator>
using namespace std;


class Solution {
public:
    bool isHappy(int n) {


        n = n * n;
        return false;
    }
};



int main() {
    int sum = 0;
    int next = 0;
    int x = 19;
    int base = 10;
    while (sum != 1) {
        base = 10;
        next = 0;
        sum = 0;
        while (x != 0) {
            next = x % base;
            if (next == 0) {
                x /= 10;
            }
            x -= next;
            sum += (next * next);
            x /= base;
            base *= base;
            cout << endl << next << endl;
        }
        cout << endl << sum << endl;
        x = sum;
        if (x == sum) {
            break;
        }
    }










    return (0);
}


