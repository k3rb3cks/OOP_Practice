#include<bits/stdc++.h>

class A
{
    int a;

    public:
        A(){}
        A(int d){   a = d;   }
        ~A()
        {
            std::cout<<std::endl<<"Object A being destroyed!";
        }
        void show()
        {
            std::cout<<a<<std::endl;
        }
};

class B: public A
{
    int b;
    public:
        B() : A()
        {
        }

        B(int d, int d1): A(d)
        {
            b = d1;
        }
        ~B()
        {
            std::cout<<std::endl<<"Object B is being destroyed";
        }
        void show()
        {
            A::show();
            std::cout<<b<<std::endl;
        }

};

int main()
{
    B *p;
    p = new B(20, 30);
    p->show(); //(*p).show() also means the same thing
    delete p;
}

//Child class destructor called before parent class destructor