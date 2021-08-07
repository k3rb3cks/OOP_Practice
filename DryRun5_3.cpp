#include<iostream>

class A
{
    int x;
    A *p;

    public:
        void setdata(int d, A *pb)
        {
            x = d;
            p = pb;
        }

        void display()
        {
            std::cout<<x<<" "<<(*p.x)<<std::endl;
        }
};

int main()
{
    A a, b;
    a.setdata(10, &b);
    b.setdata(20, &a);
    a.display();
    b.display();
}