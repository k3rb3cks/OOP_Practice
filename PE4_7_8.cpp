#include<iostream>

double power(double m, int n = 2)
{
    if(n == 0)
        return 1;
    
    return m * power(m, n - 1);
}

int power(int m, int n = 2)
{
    if(n == 0)
        return 1;
    return m * power(m, n - 1);
}

int main()
{
    double m;
    int n;

    std::cout<<"Enter a double value of m: ";
    std::cin>>m;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;

    std::cout<<m<<"^"<<n<<" = "<<power(m, n)<<std::endl;

    std::cout<<"Enter an int value of m: ";
    std::cin>>m;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    std::cout<<m<<"^"<<n<<" = "<<power(m, n)<<std::endl;
}