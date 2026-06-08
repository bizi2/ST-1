// Copyright 2025 UNN-CS
// Nazyrov A.A.

#include <gtest/gtest.h>
#include "alg.h"

// ===== isPrimeNum ????? =====
TEST(PrimeTest, ZeroAndOne) {
    EXPECT_FALSE(isPrimeNum(0));
    EXPECT_FALSE(isPrimeNum(1));
}

TEST(PrimeTest, SmallPrimes) {
    EXPECT_TRUE(isPrimeNum(2));
    EXPECT_TRUE(isPrimeNum(3));
    EXPECT_TRUE(isPrimeNum(5));
    EXPECT_TRUE(isPrimeNum(7));
    EXPECT_TRUE(isPrimeNum(11));
}

TEST(PrimeTest, SmallNonPrimes) {
    EXPECT_FALSE(isPrimeNum(4));
    EXPECT_FALSE(isPrimeNum(6));
    EXPECT_FALSE(isPrimeNum(8));
    EXPECT_FALSE(isPrimeNum(9));
    EXPECT_FALSE(isPrimeNum(10));
}

TEST(PrimeTest, LargePrime) {
    EXPECT_TRUE(isPrimeNum(7919));
}

TEST(PrimeTest, LargeNonPrime) {
    EXPECT_FALSE(isPrimeNum(1000000));
}

// ===== findNthPrime ????? =====
TEST(NthPrimeTest, FirstFive) {
    EXPECT_EQ(findNthPrime(1), 2);
    EXPECT_EQ(findNthPrime(2), 3);
    EXPECT_EQ(findNthPrime(3), 5);
    EXPECT_EQ(findNthPrime(4), 7);
    EXPECT_EQ(findNthPrime(5), 11);
}

TEST(NthPrimeTest, TenthPrime) {
    EXPECT_EQ(findNthPrime(10), 29);
}

// ===== getNextPrime ????? =====
TEST(NextPrimeTest, Basic) {
    EXPECT_EQ(getNextPrime(1), 2);
    EXPECT_EQ(getNextPrime(2), 3);
    EXPECT_EQ(getNextPrime(4), 5);
    EXPECT_EQ(getNextPrime(10), 11);
    EXPECT_EQ(getNextPrime(20), 23);
}

// ===== calcSumPrimes ????? =====
TEST(SumPrimesTest, SmallBounds) {
    EXPECT_EQ(calcSumPrimes(2), 0);
    EXPECT_EQ(calcSumPrimes(3), 2);
    EXPECT_EQ(calcSumPrimes(10), 17);
    EXPECT_EQ(calcSumPrimes(20), 77);
}

