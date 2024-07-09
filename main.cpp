#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm> // для функції std::max_element
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <vector>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype> // для tolower
#include <cctype> // для tolower

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
 
public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}
    void print() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }
    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }
    Fraction operator*(int value) const {
        return Fraction(numerator * value, denominator);
    }
    friend Fraction operator*(int value, const Fraction& frac) {
        return Fraction(frac.numerator * value, frac.denominator);
    }
};
int main() {
    Fraction f1(3, 4);
    f1.print();
 
    Fraction f2(2, 7);
    f2.print();
 
    Fraction f3 = f1 * f2;
    f3.print();
 
    Fraction f4 = f1 * 3;
    f4.print();
 
    Fraction f5 = 3 * f2;
    f5.print();
 
    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();
 
    return 0;
}