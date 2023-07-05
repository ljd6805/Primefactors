#include "pch.h"
#include "../Project5/prime-factors.cpp"

TEST(TestCaseName, Of1) {
	PrimeFactors prime_factors;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factors.of(1));
}
TEST(TestCaseName, Of2) {
	PrimeFactors prime_factors;
	std::vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factors.of(2));
}