#include<iostream>

int main()
{
    int F, C;

    std::cout<<"Enter the temperature in degree Fahrenheit: ";
    std::cin>>F;

    C = (F - 32) * 5 / 9;
    std::cout<<"The temperature in degree Celcius: "<<C; 

}