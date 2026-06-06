// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
TEST(PrimeCheck, ZeroAndOne) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(PrimeCheck, SmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(PrimeCheck, SmallNonPrimes) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
}

TEST(NPrimeTest, FirstFive) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, Tenth) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NextPrimeTest, Basic) {
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(20), 23);
}

TEST(SumPrimeTest, UpToTen) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, UpToLarge) {
    EXPECT_EQ(sumPrime(30), 129);
    EXPECT_EQ(sumPrime(50), 328);
}
