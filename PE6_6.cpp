#include<bits/stdc++.h>

class Prime
{
    private:
        int n;
    
    public:
        Prime()
        {
            this->n = 0;
            std::cout<<"Not Prime"<<std::endl;
        }
        Prime(int n)
        {
            this->n = n;

            bool isPrime = true;

            if(this-> n == 0 or this->n == 1)
            {
                isPrime = false;
            }
            else
            {
                for(int i = 0; i < n/2; i++)
                {
                    if(n % i == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
            }

            if(isPrime)
                std::cout<<"Number is Prime!"<<std::endl;
            else
                std::cout<<"Number is not Prime"<<std::endl;
            
        }
};

int main()
{
    Prime p = Prime(5);
}