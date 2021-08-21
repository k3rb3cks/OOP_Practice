#include<bits/stdc++.h>

//Confusion!!!

class B
{
    private:
        float b;
    
    public:
        B()
        {
            b = 5.0;
        }

        virtual void show()
        {
            std::cout<<"b = "<<b<<std::endl;
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
            d = 10;
            d1 = 20.0;
        }

        void show()
        {
            std::cout<<"d = "<<d<<std::endl;
            std::cout<<"d1 = "<<d1<<std::endl;
        }
};

int main()
{
    B ob, *ptr;
    D ob1;

    ptr = &ob;

    std::cout<<sizeof(*ptr)<<std::endl;
    ptr = &ob1;
    std::cout<<sizeof(*ptr)<<std::endl;
}
    