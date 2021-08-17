#include<bits/stdc++.h>

class Complex
{
    private:
        int real, imaginary;

    public:

        Complex()
        {
            this->real = 0;
            this->imaginary = 0;
        }

        Complex(int real, int imaginary)
        {
            this->real = real;
            this->imaginary = imaginary;
        }

        Complex(const Complex & c)
        {
            this->real = c.real;
            this->imaginary = c.imaginary;
        }

        Complex operator+(Complex c)
        {
            Complex addition;

            addition.real = this->real + c.real;
            addition.imaginary = this->imaginary + c.imaginary;

            return addition;
        }

        Complex operator-(Complex c)
        {
            Complex subtraction;

            subtraction.real = this->real - c.real;
            subtraction.imaginary = this->imaginary - c.imaginary;

            return subtraction;
        }

        Complex operator*(Complex c)
        {
            Complex multiplication;

            multiplication.real = ((this->real * c.real) - (this->imaginary * c.imaginary));
            multiplication.imaginary = (this->real * c.imaginary) + (this->imaginary * c.real);

            return multiplication;
        }

        void operator-()
        {
            this->real = -this->real;
            this->imaginary = this->imaginary;
        }

        int mod()
        {
            return ((real * real) - (imaginary * imaginary));
        }

        friend Complex operator/(Complex c1, Complex c2);
        friend std::ostream  & operator<<(std::ostream &out, const Complex &c);
        friend std::istream & operator>>(std::istream &in, Complex &c);

};

Complex operator/(Complex c1, Complex c2)
{
    Complex division;

    division.real = (c1.real * c2.real + c1.imaginary * c2.imaginary)/(c2.real * c2.real - c2.imaginary * c2.imaginary);
    division.imaginary = ((c1.imaginary * c2.real) - (c1.real * c2.imaginary))/(c2.real * c2.real - c2.imaginary * c2.imaginary);

    return division;
}

std::ostream & operator<<(std::ostream &out, const Complex &c)
{   
    if(c.real == 0)
    {
        out<<c.imaginary<<"i"<<std::endl;
        return out;
    }

    if(c.imaginary > 0)
    {
        out<<c.real<<" + i"<<c.imaginary<<std::endl;
        return out;
    }
    else if(c.imaginary < 0)
    {
        out<<c.real<<" - i"<<abs(c.imaginary)<<std::endl;
        return out;
    }
    else
    {
        out<<c.real<<std::endl;
        return out;
    }
}

std::istream & operator>>(std::istream &in, Complex & c)
{
    std::cout<<"Enter the real part: ";
    in>>c.real;

    std::cout<<"Enter the imaginary part: ";
    in>>c.imaginary;

    std::cout<<std::endl;

    return in;
}



int main()
{
    Complex c1, c2;

    std::cin>>c1;
    std::cout<<"The complex number is: "<<c1;
    std::cin>>c2;
    std::cout<<"The complex number is: "<<c2;

    std::cout<<"The addition is: "<<c1 + c2;

    std::cout<<"The subtraction is: "<<c1 - c2;

    std::cout<<"The multiplication is: "<<c1 * c2;

    std::cout<<"The division is: "<<c1 / c2;

    std::cout<<c1.mod();
}