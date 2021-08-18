#include<bits/stdc++.h>

class B
{
    int x;

    public:
        B(){    std::cout<<"1\t"; }
};

class D: public B
{
    int y;
    public:
        D(){    std::cout<<"2\t"; }

        D(int i){   std::cout<<"3\t"; }
};

int main()
{
    B b;
    D d1;
    D d2(1);
}

