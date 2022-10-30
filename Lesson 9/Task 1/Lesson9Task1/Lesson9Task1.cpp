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

    void simplification()
    {
        int sign = 1;

        if (numenator_ < 0 && denominator_ < 0)
        {
            numenator_ = numenator_ * (-1);
            denominator_ = denominator_ * (-1);
        }
        else if (denominator_ < 0)
        {
            sign = sign * (-1);
            denominator_ = denominator_ * (-1);
        }
        else if (numenator_ < 0)
        {
            numenator_ = numenator_ * (-1);
            sign = sign * (-1);
        }

        if (numenator_ != 0 && numenator_ != 1 && denominator_ != 1)
        {
            int x = 0;
            if (numenator_ < denominator_)
            {
                x = numenator_;
            }
            else
            {
                x = denominator_;
            }

            for (int i = x; i > 1; --i)
            {
                if (numenator_ % i == 0 && denominator_ % i == 0)
                {
                    numenator_ = numenator_ / i;
                    denominator_ = denominator_ / i;
                }
            }
        }

        numenator_ = sign * numenator_;
    }

    bool comparison1(Fraction f1, Fraction f2)
    {
        f1.simplification();
        f2.simplification();
        bool check = false;
        if (f1.numenator_ == f2.numenator_ && f1.denominator_ == f2.denominator_)
        {
            check = true;
        }
        return check;
    }

    bool comparison2(Fraction f1, Fraction f2)
    {
        f1.simplification();
        f2.simplification();
        bool check = false;
        if (f1.numenator_ * f2.denominator_ > f2.numenator_ * f1.denominator_)
        {
            check = true;
        }
        return check;
    }

    bool operator==(Fraction other) { return comparison1(*this, other); }
    bool operator!=(Fraction other) { return !(*this == other); }
    bool operator>(Fraction other) { return comparison2(*this, other); }
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