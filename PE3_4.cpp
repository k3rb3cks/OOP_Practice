#include<iostream>
#include<math.h>

float investment(float p, float r, float n)
{
    if(n == 1)
        return p*(1 + r);
    
    return investment(p*(1 + r), r, n - 1);
}

int main()
{
    float v, p , r, n;

    std::cout<<"Enter the value of p, r, n: ";
    std::cin>>p>>r>>n;

    v = (p) * pow(1 + r, n);

    std::cout<<"V = "<<v<<std::endl;

    std::cout<<"Using recursion: "<<std::endl;

    std::cout<<investment(p, r, n);
}