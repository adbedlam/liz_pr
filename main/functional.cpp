//
// Created by First on 11.03.2025.
//
#include "function.h"

int factorial(int n) {
    if (n==1) {
        return 1;
    }else {
        return n*factorial(n-1);
    }
}