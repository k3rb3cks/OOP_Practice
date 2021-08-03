#include<iostream>

void memory(int size)
{
    int *p = new int[size];
}


int main()
{
    int M;

    std::cout<<"Enter the value of M: ";
    std::cin>>M;

    memory(M);
}