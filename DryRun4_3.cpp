#include<iostream>

int & fun(int &);

int & fun(int & x)
{
    x++;
    return x;
}

int main()
{
    int a = 5;
    fun(a) = a;
    std::cout<<a<<std::endl;
    fun(a) = ++a;
    std::cout<<a<<std::endl;
    fun(a) = a++;
    std::cout<<a<<std::endl;
}