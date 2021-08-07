#include<iostream>

#define PI 3.14

double area(double radius)
{
    return (PI * radius * radius);
}

double area(double height, double base)
{
    return (0.5 * height * base);
}

int main()
{
    double radius, height, base;

    std::cout<<"Enter the radius of the circle: ";
    std::cin>>radius;

    std::cout<<"The area of circle is "<<area(radius)<<" sq. units"<<std::endl;

    std::cout<<"Enter the height and base of the triangle: ";
    std::cin>>height>>base;
    
    std::cout<<"The area of triangle is "<<area(height, base)<<" sq. units"<<std::endl;

}


