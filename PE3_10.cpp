#include<iostream>

float electricity_bill(int units)
{
    if(units <= 100)
    {
        return (60 * units / 100);
    }
    else if(units > 100 && units <= 300)
    {
        return (60 + ((units - 100) * 80)/100);
    }
    else
    {
        float bill = 220 + (units - 300) * 0.9;

        if(bill > 300)
            bill += 0.15 * bill;
        
        return bill;
    }
}

int main()
{
    int units;

    std::cout<<"Enter the electricity bill units: ";
    std::cin>>units;

    std::cout<<"The electricity bill is Rs. "<<electricity_bill(units);
}