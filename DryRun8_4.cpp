#include<bits/stdc++.h>

class A
{
    int a;

    public:
        A(){}
        A(int d){   a = d;  }
        ~A()
        {
            std::cout<<"Object of A being destroyed!"<<std::endl;
        }
        void show_A()
        {
            std::cout<<a<<std::endl;
        }
};

class B
{
    int b;

    public:
        B(){}
        B(int d)
        {
            b = d;
        }
        ~B()
        {
            std::cout<<"Object of B being destroyed!"<<std::endl;
        }

        void show_B()
        {
            std::cout<<b<<std::endl;
        }
};

class C: public B, public A
{
    int c;

    public:
        C(): A(), B(){}

        C(int d1, int d2, int d3) : A(d1), B(d2)
        {
            c = d3;
        }

        ~C()
        {
            std::cout<<"Object of C being destroyed!"<<std::endl;
        }
        void show_C()
        {
            show_A();
            show_B();
            std::cout<<c<<std::endl;
        }
};

int main()
{
    C *p;
    p = new C(10, 20, 30);
    p->show_C();
    delete p;
}