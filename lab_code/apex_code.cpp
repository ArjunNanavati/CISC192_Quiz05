//
//
#include <iostream>
#include "apex_code.h"

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}
