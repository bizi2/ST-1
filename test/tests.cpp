// Copyright 2025 UNN-CS
// Nazyrov A.A.

#include <gtest/gtest.h>
#include "alg.h"
// ========== isPrimeNum ????? (10 ??????) ==========
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
    EXPECT_TRUE(isPrimeNum(13));
    EXPECT_TRUE(isPrimeNum(17));
    EXPECT_TRUE(isPrimeNum(19));
TEST(PrimeTest, SmallNonPrimes) {
    EXPECT_FALSE(isPrimeNum(4));
    EXPECT_FALSE(isPrimeNum(6));
    EXPECT_FALSE(isPrimeNum(8));
    EXPECT_FALSE(isPrimeNum(9));
    EXPECT_FALSE(isPrimeNum(10));
    EXPECT_FALSE(isPrimeNum(12));
    EXPECT_FALSE(isPrimeNum(14));
    EXPECT_FALSE(isPrimeNum(15));
    EXPECT_FALSE(isPrimeNum(16));
    EXPECT_FALSE(isPrimeNum(18));
    EXPECT_FALSE(isPrimeNum(20));
TEST(PrimeTest, LargePrime) {
    EXPECT_TRUE(isPrimeNum(7919));
    EXPECT_TRUE(isPrimeNum(999983));
TEST(PrimeTest, LargeNonPrime) {
    EXPECT_FALSE(isPrimeNum(1000000));
// ========== findNthPrime ????? (10 ??????) ==========
TEST(NthPrimeTest, FirstTen) {
    EXPECT_EQ(findNthPrime(1), 2);
    EXPECT_EQ(findNthPrime(2), 3);
    EXPECT_EQ(findNthPrime(3), 5);
    EXPECT_EQ(findNthPrime(4), 7);
    EXPECT_EQ(findNthPrime(5), 11);
    EXPECT_EQ(findNthPrime(6), 13);
    EXPECT_EQ(findNthPrime(7), 17);
    EXPECT_EQ(findNthPrime(8), 19);
    EXPECT_EQ(findNthPrime(9), 23);
    EXPECT_EQ(findNthPrime(10), 29);
TEST(NthPrimeTest, NextFive) {
    EXPECT_EQ(findNthPrime(11), 31);
    EXPECT_EQ(findNthPrime(12), 37);
    EXPECT_EQ(findNthPrime(13), 41);
    EXPECT_EQ(findNthPrime(14), 43);
    EXPECT_EQ(findNthPrime(15), 47);
TEST(NthPrimeTest, ZeroInput) {
    EXPECT_EQ(findNthPrime(0), 0);
// ========== getNextPrime ????? (8 ??????) ==========
TEST(NextPrimeTest, Basic) {
    EXPECT_EQ(getNextPrime(0), 2);
    EXPECT_EQ(getNextPrime(1), 2);
    EXPECT_EQ(getNextPrime(2), 3);
    EXPECT_EQ(getNextPrime(3), 5);
    EXPECT_EQ(getNextPrime(4), 5);
    EXPECT_EQ(getNextPrime(10), 11);
    EXPECT_EQ(getNextPrime(11), 13);
    EXPECT_EQ(getNextPrime(20), 23);
    EXPECT_EQ(getNextPrime(30), 31);
    EXPECT_EQ(getNextPrime(100), 101);
// ========== calcSumPrimes ????? (8 ??????) ==========
TEST(SumPrimesTest, SmallBounds) {
    EXPECT_EQ(calcSumPrimes(2), 0);
    EXPECT_EQ(calcSumPrimes(3), 2);
    EXPECT_EQ(calcSumPrimes(10), 17);
    EXPECT_EQ(calcSumPrimes(20), 77);
    EXPECT_EQ(calcSumPrimes(30), 129);
    EXPECT_EQ(calcSumPrimes(50), 328);
    EXPECT_EQ(calcSumPrimes(100), 1060);
    EXPECT_EQ(calcSumPrimes(200), 4227);
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
// ========== ?????????????? ????? ??? isPrimeNum ==========
TEST(PrimeTest, PrimeNumbersUpToFifty) {
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int p : primes) {
        EXPECT_TRUE(isPrimeNum(p));
    }
TEST(PrimeTest, NonPrimesUpToFifty) {
    int nonPrimes[] = {4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25};
    for (int np : nonPrimes) {
        EXPECT_FALSE(isPrimeNum(np));
TEST(PrimeTest, EdgeCaseTwo) {
TEST(PrimeTest, EdgeCaseThree) {
// ========== ?????????????? ????? ??? findNthPrime ==========
TEST(NthPrimeTest, TwentiethPrime) {
    EXPECT_EQ(findNthPrime(20), 71);
TEST(NthPrimeTest, TwentyFifthPrime) {
    EXPECT_EQ(findNthPrime(25), 97);
TEST(NthPrimeTest, ThirtiethPrime) {
    EXPECT_EQ(findNthPrime(30), 113);
// ========== ?????????????? ????? ??? getNextPrime ==========
TEST(NextPrimeTest, AfterLargeNumber) {
    EXPECT_EQ(getNextPrime(1000), 1009);
TEST(NextPrimeTest, AfterPrime) {
    EXPECT_EQ(getNextPrime(13), 17);
TEST(NextPrimeTest, AfterComposite) {
    EXPECT_EQ(getNextPrime(50), 53);
// ========== ?????????????? ????? ??? calcSumPrimes ==========
TEST(SumPrimesTest, UpToOneHundred) {
TEST(SumPrimesTest, UpToTwoHundred) {
TEST(SumPrimesTest, UpToFifty) {
