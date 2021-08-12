#include<iostream>

class des
{
    public:
        des(int x)
        {
            std::cout << "Start Value " << x << std::endl;
        }

        ~des(int x)//Destructor does not take any argument nor returns any value
        {
            std::cout<<"HI";
        }
};

int main()
{
    des d1(9);
}