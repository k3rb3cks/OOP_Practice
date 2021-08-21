#include<bits/stdc++.h>

class original_base
{
    public:
        virtual void print()
        {
            std::cout<<"Print version of base class"<<std::endl;
        }

        void show()
        {
            std::cout<<"Show version of base class"<<std::endl;
        }
};

class derived_from : public original_base
{
    public:
        void print()
        {
            std::cout<<"Print version of derived class "<<std::endl;
        }

        void show()
        {
            std::cout<<"Show version of derived class"<<std::endl;
        }
};

int main()
{
    original_base *ptr;
    derived_from x;
    ptr = &x;
    ptr->print();
    ptr->show();
}