// Copyright 2025 UNN-CS
// Nazyrov A.A.

#include "alg.h"
#include <cmath>

bool isPrimeNum(uint64_t val) {
    if (val < 2) return false;
    if (val == 2) return true;
    if (val % 2 == 0) return false;
    
    uint64_t limit = static_cast<uint64_t>(std::sqrt(val));
    for (uint64_t d = 3; d <= limit; d += 2) {
        if (val % d == 0) return false;
    }
    return true;
}

uint64_t findNthPrime(uint64_t n) {
    if (n == 0) return 0;
    
    uint64_t cnt = 0;
    uint64_t num = 1;
    
    while (cnt < n) {
        num++;
        if (isPrimeNum(num)) cnt++;
    }
    return num;
}

uint64_t getNextPrime(uint64_t val) {
    uint64_t x = val + 1;
    while (!isPrimeNum(x)) x++;
    return x;
}

uint64_t calcSumPrimes(uint64_t bound) {
    uint64_t total = 0;
    for (uint64_t i = 2; i < bound; i++) {
        if (isPrimeNum(i)) total += i;
    }
    return total;
}

