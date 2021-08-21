#include<bits/stdc++.h>

template <class T = float>

class A
{
    T x;
    public:
        A() {x = 25;}
        A(T y) {x = y;}

        void display()
        {
            std::cout<<x<<std::endl;
        }
};

int main()
{
    A<> ob1;
    A<int> ob2;
    A<int> ob3(55);
    A<> ob4(33.3);
    ob1.display();
    ob2.display();
    ob3.display();
    ob4.display();

}