#include "BaseFuzzyNumber.h"
#include <sstream>

BaseFuzzyNumber::BaseFuzzyNumber() : x(0), l(0), r(0) {}
BaseFuzzyNumber::BaseFuzzyNumber(double x, double l, double r) : x(x), l(l), r(r) {}
BaseFuzzyNumber::BaseFuzzyNumber(const BaseFuzzyNumber& other) : x(other.x), l(other.l), r(other.r) {}

double BaseFuzzyNumber::getX() const { return x; }
double BaseFuzzyNumber::getL() const { return l; }
double BaseFuzzyNumber::getR() const { return r; }

void BaseFuzzyNumber::setX(double value) { x = value; }
void BaseFuzzyNumber::setL(double value) { l = value; }
void BaseFuzzyNumber::setR(double value) { r = value; }

void BaseFuzzyNumber::Init(double x, double l, double r) {
    this->x = x;
    this->l = l;
    this->r = r;
}

void BaseFuzzyNumber::Read() {
    cout << "Enter x, l, r: ";
    cin >> x >> l >> r;
}

void BaseFuzzyNumber::Display() const {
    cout << toString() << endl;
}

string BaseFuzzyNumber::toString() const {
    ostringstream oss;
    oss << "(" << (x - l) << ", " << x << ", " << (x + r) << ")";
    return oss.str();
}

BaseFuzzyNumber::operator string() const {
    return toString();
}

ostream& operator<<(ostream& os, const BaseFuzzyNumber& num) {
    os << num.toString();
    return os;
}

istream& operator>>(istream& is, BaseFuzzyNumber& num) {
    is >> num.x >> num.l >> num.r;
    return is;
}