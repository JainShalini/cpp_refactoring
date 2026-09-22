#include "comments/X1.h"

namespace refactoring::comments {

int X1::m(int lowerBound, int upperBound) {
    int p = 0;

    for (int number = lowerBound; number <= upperBound; number++) {
        p += square(number);
    }

    // Return accumulated sum
    return p;
}

int X1::square(int number) {
    return number * number;
}

} // namespace refactoring::comments
