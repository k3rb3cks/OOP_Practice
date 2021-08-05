#include<iostream>
#include<math.h>

long int fact(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    
        return n * fact(n - 1);

}

long double sine(long double x)
{
    
    
}

int main()
{
    int x;
    std::cout<<"Enter value of x : ";
    std::cin>>x;

    std::cout<<"sin("<<x <<") = " << sine(x);
}