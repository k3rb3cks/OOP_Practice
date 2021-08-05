#include<iostream>

int p;
int & display();

int main()
{
    display() = 5; //???????
    std::cout<<p;
    return 0;
}

int & display()
{
    return 2;
}