#pragma once
#include "BaseFuzzyNumber.h"

class FuzzyNumberPublic : public BaseFuzzyNumber {
public:
    using BaseFuzzyNumber::BaseFuzzyNumber;

    FuzzyNumberPublic& operator=(const FuzzyNumberPublic& other);
    friend FuzzyNumberPublic operator+(const FuzzyNumberPublic& a, const FuzzyNumberPublic& b);
    friend FuzzyNumberPublic operator*(const FuzzyNumberPublic& a, const FuzzyNumberPublic& b);

    FuzzyNumberPublic& operator++();
    FuzzyNumberPublic operator++(int);
    FuzzyNumberPublic& operator--();
    FuzzyNumberPublic operator--(int);
};