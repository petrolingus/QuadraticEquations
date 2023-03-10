#include <gtest/gtest.h>
#include <cmath>
#include "quadratic.h"

// Check for equal roots if the discriminant is zero
TEST(QuadraticEquationTest, DiscriminantIsZero) {
    const std::pair<double, double> &pair = quadratic::calculate(1, 2, 1);
    EXPECT_EQ(pair.first, pair.second);
}

// Check for different roots if the discriminant is greater than zero
TEST(QuadraticEquationTest, DiscriminantGreaterZero) {
    const std::pair<double, double> &pair = quadratic::calculate(1, 5, 1);
    EXPECT_NE(pair.first, pair.second);
}

TEST(QuadraticEquationTest, DiscriminantLessZero) {
    const std::pair<double, double> &pair = quadratic::calculate(1, 1, 1);
    EXPECT_TRUE(std::isnan(pair.first));
    EXPECT_TRUE(std::isnan(pair.second));
}
