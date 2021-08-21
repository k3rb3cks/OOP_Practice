#include<bits/stdc++.h>

void square(int * snum)
{
    std::cout<<"Square of 10 is: ";
    *snum *= *snum;
}

int main()
{
    int num = 10;
    square(&num);
    std::cout<<num<<std::endl;

}