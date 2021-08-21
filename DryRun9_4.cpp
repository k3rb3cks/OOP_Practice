#include<bits/stdc++.h>

class p
{
    public:
        virtual void print()
        {
            std::cout<<"It is base class"<<std::endl;
        }
};

class q : public p
{
    public:
        void print()
        {
            std::cout<<"It is derived class"<<std::endl;
        }
};

int main()
{
    p *b = new p;
    b->print();
}
