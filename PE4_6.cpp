#include<iostream>

#define largest_of_3(a, b, c) ((a > b) ? ((a > c)?a:c): ((b > c)?b:c))

inline int largest(int a, int b, int c)
{
    return ((a > b)?((a > c) ? a : c):((b > c)? b: c));
}

int main()
{
    int a, b, c;
    std::cout<<"Enter three numbers: ";
    std::cin>>a>>b>>c;

    std::cout<<"The largest of the 3 is "<<largest(a, b, c)<<std::endl;

    std::cout<<"The largest of 3(macro) is "<<largest_of_3(a, b, c);
}


