#include "comments/X1.h"

namespace refactoring::comments {

int SquareCalculator::sumOfSquaresInRange(int lowerBound, int upperBound) {
    int accumulatedSum = 0;

    for (int number = lowerBound; number <= upperBound; number++) {
        accumulatedSum += square(number);
    }

    return accumulatedSum;
}

int SquareCalculator::square(int number) {
    return number * number;
}

} 
