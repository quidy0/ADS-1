// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    bool flag = true;
    for (uint64_t i = 2; i <= value / 2; i++) {
        if (value % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

uint64_t nPrime(uint64_t n) {
    int count = 0;
    int num = 2;

    while (count < n) {
        if (checkPrime(num)) {
            count++;
        }
        if (count == n) {
            break;
        }
        num++;
    }
    return num;
}

uint64_t nextPrime(uint64_t value) {
    int nextPrime = value + 1;

    while (true) {
        if (checkPrime(nextPrime)) {
            return nextPrime;
        }
        nextPrime++;
    }
}

uint64_t nextPrime(uint64_t value) {
    int nextPrime = value + 1;

    while (true) {
        if (checkPrime(nextPrime)) {
            return nextPrime;
        }
        nextPrime++;
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t count = 0;
    for (uint64_t j = hbound - 2; j >= 2; j--) {
        if (checkPrime(j) && j > 1) {
            count += j;
        }
    }
    return count;
}
