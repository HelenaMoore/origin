#include <iostream>

class Fraction
{
private: 
    int numenator_;
    int denominator_;
public:
    Fraction(int numenator, int denomenator)
    {
        numenator_ = numenator;
        denominator_ = denomenator;
    }

    double division()
    {
        return numenator_ / denominator_;
    }

    bool operator==(Fraction other) { return division() == other.division(); }
    bool operator!=(Fraction other) { return !(*this == other); }
    bool operator>(Fraction other) { return division() > other.division(); }
    bool operator<(Fraction other) { return other > *this; }
    bool operator>=(Fraction other) { return !(*this < other); }
    bool operator<=(Fraction other) { return !(*this > other); }
};

int main(int argc, char** argv)
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}