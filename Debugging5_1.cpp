#include<iostream>

class Addition
{
    int p, q, r, s;

    void input(void)
    {
        std::cout<<"Enter the three numbers \n";
        std::cin>>p>>q>>r;
    }

    void show(void)
    {
        std::cout<<"The addition = "<<add()<<std::endl;
    }

    int add(void)
    {
        s = p + q + r;
        return s;
    }
};

int main()
{
    Addition a;
    //a.input(); //private member functions;
    //a.show();
}

