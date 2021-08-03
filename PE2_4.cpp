#include<iostream>

int main()
{
    int x, a, b, c;

    std::cout<<"Enter the values of a, b and c: ";
    std::cin>>a>>b>>c;

    x = a/b - c;

    std::cout<<"The value of x = "<<x;

}