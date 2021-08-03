#include<iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    x = 20;
    y = 10;

    std::cout<< "x = " << x << " " << "y = " << y << std::endl;

    swap(x, y);

    std::cout<<"After Swapping: "<< "x = " << x << " " << "y = " << y;
     
 
}