#include "pch.h"
#include "../Project5/prime-factors.cpp"

class PrimeFixture:public testing::Test
{
public:
	PrimeFactors prime_factors;
	std::vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factors.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factors.of(2));
}

TEST_F(PrimeFixture, Of3) {
	expected = {3};
	EXPECT_EQ(expected, prime_factors.of(3));
}

TEST_F(PrimeFixture, Of4) {
	expected = {2,2};
	EXPECT_EQ(expected, prime_factors.of(4));
}

TEST_F(PrimeFixture, Of6) {
	expected = { 2,3 };
	EXPECT_EQ(expected, prime_factors.of(6));
}

TEST_F(PrimeFixture, Of9) {
	expected = { 3,3 };
	EXPECT_EQ(expected, prime_factors.of(9));
}

TEST_F(PrimeFixture, Of12) {
	expected = { 2,2,3 };
	EXPECT_EQ(expected, prime_factors.of(12));
}
