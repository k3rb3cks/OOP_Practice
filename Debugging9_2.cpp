#include<bits/stdc++.h>

int main()
{
    int p = 10;
    double q = 20.33;
    int* x = &p;
    double *y = &q;

    std::cout<<"Value 1: " <<*y<<std::endl;
    std::cout<<"Value 2: "<<*x<<std::endl;


    y = (double*)&p;
    x = (int*)&q;

    std::cout<<"Value 1: " <<*y<<std::endl;
    std::cout<<"Value 2: "<<*x<<std::endl;

}