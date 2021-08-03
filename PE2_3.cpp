#include<iostream>

int main()
{
    char ch;
    std::cout<<"Enter a character of whose ascii value is to be shown: ";
    std::cin>>ch;

    std::cout<<"The ASCII value is: "<<(int)ch;
}