#include<iostream>

char* allocateMemory()
{
    char* str;
    str = "XYZ";
    return str;
}

int main()
{
    char* str;
    str = allocateMemory();
    std::cout<<str<<std::endl;
    delete str;
    str = "123";

    
    std::cout<<str;
}