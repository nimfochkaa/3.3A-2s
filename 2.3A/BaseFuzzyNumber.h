#pragma once
#include <iostream>
#include <string>

using namespace std;

class BaseFuzzyNumber {
protected:
    double x, l, r;

public:
    BaseFuzzyNumber();
    BaseFuzzyNumber(double x, double l, double r);
    BaseFuzzyNumber(const BaseFuzzyNumber& other);

    double getX() const;
    double getL() const;
    double getR() const;

    void setX(double value);
    void setL(double value);
    void setR(double value);

    void Init(double x, double l, double r);
    void Read();
    void Display() const;
    string toString() const;

    operator string() const;

    friend ostream& operator<<(ostream& os, const BaseFuzzyNumber& num);
    friend istream& operator>>(istream& is, BaseFuzzyNumber& num);
};
