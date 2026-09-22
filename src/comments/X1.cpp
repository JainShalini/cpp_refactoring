#include "comments/X1.h"

namespace refactoring::comments {

int X1::m(int lowerBound, int upperBound) {
    int accumulatedSum = 0;

    for (int number = lowerBound; number <= upperBound; number++) {
        accumulatedSum += square(number);
    }

    // Return accumulated sum
    return accumulatedSum;
}

int X1::square(int number) {
    return number * number;
}

} // namespace refactoring::comments
