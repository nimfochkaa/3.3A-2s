#include "FuzzyNumberPublic.h"

FuzzyNumberPublic& FuzzyNumberPublic::operator=(const FuzzyNumberPublic& other) {
    if (this != &other) {
        x = other.x;
        l = other.l;
        r = other.r;
    }
    return *this;
}

FuzzyNumberPublic operator+(const FuzzyNumberPublic& a, const FuzzyNumberPublic& b) {
    return FuzzyNumberPublic(a.x + b.x - a.l - b.l, a.x + b.x, a.x + b.x + a.r + b.r);
}

FuzzyNumberPublic operator*(const FuzzyNumberPublic& a, const FuzzyNumberPublic& b) {
    return FuzzyNumberPublic(a.x * b.x, a.x * b.l + b.x * a.l + a.l * b.l, a.x * b.r + b.x * a.r + a.r * b.r);
}

FuzzyNumberPublic& FuzzyNumberPublic::operator++() {
    x++;
    return *this;
}

FuzzyNumberPublic FuzzyNumberPublic::operator++(int) {
    FuzzyNumberPublic temp = *this;
    x++;
    return temp;
}

FuzzyNumberPublic& FuzzyNumberPublic::operator--() {
    x--;
    return *this;
}

FuzzyNumberPublic FuzzyNumberPublic::operator--(int) {
    FuzzyNumberPublic temp = *this;
    x--;
    return temp;
}
