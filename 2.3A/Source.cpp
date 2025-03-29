#include <iostream>
#include "FuzzyNumberPublic.h"

#pragma pack(1)
struct PackedFuzzy {
    FuzzyNumberPublic fn;
};
#pragma pack()

int main() {
    FuzzyNumberPublic a(5.0, 1.0, 2.0);
    FuzzyNumberPublic b;
    cout << "Enter Fuzzy Number b:\n";
    cin >> b;

    cout << "Object a: " << a << endl;
    cout << "Object b: " << b << endl;

    FuzzyNumberPublic sum = a + b;
    cout << "Sum (a + b): " << sum << endl;

    FuzzyNumberPublic prod = a * b;
    cout << "Product (a * b): " << prod << endl;

    cout << "Prefix ++a: " << ++a << endl;
    cout << "Postfix b++: " << b++ << endl;
    cout << "After b++: " << b << endl;

    cout << "Size of FuzzyNumberPublic (default): " << sizeof(FuzzyNumberPublic) << " bytes\n";
    cout << "Size of FuzzyNumberPublic (#pragma pack(1)): " << sizeof(PackedFuzzy) << " bytes\n";

    return 0;
}
