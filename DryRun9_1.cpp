#include<bits/stdc++.h>

class B
{
    private:
        float b;

    public:
        B() {   b = 5.0;    }

        virtual void show()
        {
            std::cout<<b<<std::endl;
        }
};

class D : public B
{
    private:
        float d;
        float d1;

    public:
        D() : B()
        {
            d = 10.0;
            d1 = 20;
        }

        void show()
        {
            std::cout<<d<<std::endl;
            std::cout<<d1<<std::endl;
        }
};

int main()
{
    B ob, *ptr;
    D ob1;
    ptr = &ob1;
    ptr->show();
    //std::cout<<ptr<std::endl;
    //ptr++
    //std::cout<<ptr;
}
