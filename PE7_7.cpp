#include<bits/stdc++.h>

class Fraction
{
    private:
        int numerator, denominator;

    public:

        Fraction()
        {
            this->numerator = 0;
            this->denominator = 1;
        }

        Fraction(int numerator, int denominator)
        {
            this->numerator = numerator;
            this->denominator = denominator;
        }

        Fraction(const Fraction & f)
        {
            this->numerator = f.numerator;
            this->denominator = f.denominator;
        }

        bool operator==(Fraction f)
        {
            if(this->numerator == f.numerator && this->denominator == f.denominator)
                return true;
            return false;
        }


        bool operator!=(Fraction f)
        {
            if(this->numerator != f.numerator || this->denominator != f.denominator)
                return true;
            
            return false;
        }

        bool operator>=(Fraction f)
        {
            if(this->numerator * f.denominator > this->denominator * f.numerator)
                return true;
            return false;
        }

        bool operator<=(Fraction f)
        {
            if(this->numerator * f.denominator < this->denominator * f.numerator)
                return true;
            return false;
        }

        friend std::ostream & operator<<(std::ostream & out, const Fraction f);
        friend std::istream & operator>>(std::istream & in, Fraction & f);

};

std::ostream & operator<<(std::ostream & out, const Fraction f)
{
    out<<"Fraction: "<<f.numerator<<"/"<<f.denominator<<std::endl;

    return out; 
}

std::istream & operator>>(std::istream & in, Fraction & f)
{
    std::cout<<"Enter numerator: ";
    in>>f.numerator;
    std::cout<<"Enter denominator: ";
    in>>f.denominator;

    return in;
}

int main()
{
    Fraction f1, f2;

    std::cin>>f1;
    std::cout<<f1;
    std::cin>>f2;
    std::cout<<f2;

    std::cout<<(f1 >= f2)<<std::endl;
    std::cout<<(f1 <= f2)<<std::endl;
    std::cout<<(f1 == f2)<<std::endl;   
}