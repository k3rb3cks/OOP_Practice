#include<iostream>
#include<math.h>

class Interest
{
    private:

        float interest, principal, rate;
        int tenure;

    public:

        float simple_interest(float principal, float rate, int tenure)
        {
            return (principal * rate * tenure /100.00);
        } 

        float compound_interest(float principal, float rate, int tenure)
        {
            float amount;
            amount = principal * pow((1 + (rate/100.00)), tenure);

            return (amount - principal);
        }
};

int main()
{
    float interest, principal, rate;
    int tenure;

    Interest i;

    std::cout<<"Enter Principal amount: ";
    std::cin>>principal;
    std::cout<<"Enter rate of interest: ";
    std::cin>>rate;
    std::cout<<"Enter the time period for which roi is applicable: ";
    std::cin>>tenure;

    std::cout<<"Simple Interest = "<<i.simple_interest(principal, rate, tenure)<<std::endl;
    std::cout<<"Compound Interest = "<<i.compound_interest(principal, rate, tenure);
}