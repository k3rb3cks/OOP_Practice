#include<iostream>

int largest(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
            return a;
        return c;
    }
    else
    {
        if(b > c)
            return b;
        return c;
    }
}

int main()
{
    int a, b, c;
    std::cout<<"Enter 3 numbers: ";
    std::cin>>a>>b>>c;
    std::cout<<"The largest of the 3 is "<<largest(a, b, c);
    
}