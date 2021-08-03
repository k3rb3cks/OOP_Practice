#include<iostream>

class Temperature
{
    private:
        int F;

    public:
        Temperature(int F)
        {
            this->F = F;
        }

        int convert_F_to_C()
        {
            return (F - 32) * 5 / 9;
        }


};

int main()
{
    int Fahr_temp;
    std::cout<<"Enter the temperature in degree Fahrenheit: ";
    std::cin>>Fahr_temp;

    Temperature temp(Fahr_temp);

    std::cout<<"The converted temperature in degree Celsius = "<<temp.convert_F_to_C();
}
