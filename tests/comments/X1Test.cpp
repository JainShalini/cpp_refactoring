#include <gtest/gtest.h>

#include "comments/X1.h"

using refactoring::comments::SquareCalculator;

TEST(X1Test, t1) {
    int a = 7;
    int b = 12;

    // Expected: sum of squares from 7 to 12
    int expected = 0;
    for (int i = a; i <= b; i++) {
        expected += i * i;
    }

    int actual = SquareCalculator::sumOfSquaresInRange(a, b);

    EXPECT_EQ(expected, actual);
}
