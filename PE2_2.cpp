#include<iostream>

int main()
{
    int x, y;
    std::cout<<"Enter two numbers: ";
    std::cin>>x>>y;

    std::cout<<"The larger number is: ";
    if(x > y)
        std::cout<<x;
    else    
        std::cout<<y;
}