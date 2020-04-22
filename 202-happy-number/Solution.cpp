#include "Solution.h"


bool Solution::isHappy(int n) {
    int next = 0;
    int sum = 0;
    do {
        sum = 0;
        do {
            next = n % 10;
            n /= 10;
            sum += (next * next);
        } while (n > 0);
        if (sum == 145)
            return false;
        n = sum;
    } while (sum != 1);
    return true;
}
