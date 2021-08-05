#include<iostream>

int add(int p, int q)
{
    int r;
    r = p + q;
    return r;
}

int main()
{
    int x = 7, y = 5, z;

    z = add(7, 2);
    std::cout<<"Result 1: "<<z<<std::endl;
    std::cout<<"Result 2: "<<z + add(7, 8)<<std::endl;
    std::cout<<"Result 3: "<<add(x, y)<<std::endl;
    z = 4 + add(9, y);
    std::cout<<"Result 4: "<<z<<std::endl;
}