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

    Fraction operator+(Fraction other) 
    { 
        return Fraction(((numenator_ * other.denominator_) + (other.numenator_ * denominator_)), denominator_ * other.denominator_);
    }

    Fraction operator-(Fraction other)
    {
        return Fraction(((numenator_ * other.denominator_) - (other.numenator_ * denominator_)), denominator_ * other.denominator_);
    }

    Fraction operator*(Fraction other)
    {
        return Fraction((numenator_ * other.numenator_), denominator_ * other.denominator_);
    }

    Fraction operator/(Fraction other)
    {
        return Fraction((numenator_ * other.denominator_), denominator_ * other.numenator_);
    }

    Fraction& operator++()
    {
        numenator_ = numenator_ + denominator_;
        return *this;
    }

    Fraction& operator--()
    {
        numenator_ = numenator_ - denominator_;
        return *this;
    }

    Fraction operator++(int)
    {
        Fraction temp = *this;
        ++(*this);
        return temp;
    }

    Fraction operator--(int)
    {
        Fraction temp = *this;
        --(*this);
        return temp;
    }

    void print_fraction()
    {
        Fraction::simplification();
        std::cout << numenator_ << "/" << denominator_;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int f1_num = 0, f1_denom = 0, f2_num = 0, f2_denom = 0;

    std::cout << "Введите числитель дроби 1: ";
    std::cin >> f1_num;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> f1_denom;
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> f2_num;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> f2_denom;
    
    Fraction f1(f1_num, f1_denom);
    Fraction f2(f2_num, f2_denom);

    Fraction sum = f1 + f2;
    std::cout << f1_num << "/" << f1_denom << " + " << f2_num << "/" << f2_denom << " = ";
    sum.print_fraction(); std::cout << std::endl;

    Fraction sub = f1 - f2;
    std::cout << f1_num << "/" << f1_denom << " - " << f2_num << "/" << f2_denom << " = ";
    sub.print_fraction(); std::cout << std::endl;

    Fraction mult = f1 * f2;
    std::cout << f1_num << "/" << f1_denom << " * " << f2_num << "/" << f2_denom << " = ";
    mult.print_fraction(); std::cout << std::endl;

    Fraction division = f1 / f2;
    std::cout << f1_num << "/" << f1_denom << " / " << f2_num << "/" << f2_denom << " = ";
    division.print_fraction(); std::cout << std::endl;

    Fraction pref_increment = ++f1 * f2;
    Fraction pref_inc_f1 = f1;
    std::cout << "++" << f1_num << "/" << f1_denom << " * " << f2_num << "/" << f2_denom << " = ";
    pref_increment.print_fraction(); std::cout << std::endl;
    std::cout << "Значение дроби 1 = "; 
    pref_inc_f1.print_fraction(); std::cout << std::endl;

    Fraction post_decrement = f1-- * f2;
    Fraction post_dec_f1 = f1;
    pref_inc_f1.print_fraction();
    std::cout << "--" << " * " << f2_num << "/" << f2_denom << " = ";
    post_decrement.print_fraction(); std::cout << std::endl;
    std::cout << "Значение дроби 1 = ";
    post_dec_f1.print_fraction(); std::cout << std::endl;

    return 0;
}